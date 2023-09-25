#include "threadPool.hpp"

ThreadPool::ThreadPool(int numTherads) {
	for (int i = 0; i < numTherads; ++i) {
		threads.emplace_back([this] {workerThread(); });
	}
}
ThreadPool::~ThreadPool() {
	stop = true;

	for (std::thread& thread : threads) {
		thread.join();
	}
}

void ThreadPool::enqueueTask(std::function<void()> task) {

	{
		std::unique_lock<std::mutex>lock(queueMutex);
		tasks.push_back(task);
	}
	condition.notify_one();
}
void ThreadPool::workerThread() {
	while (true)
	{
		std::function<void()> task; {
			std::unique_lock<std::mutex>lock(queueMutex);
			condition.wait(lock, [this] {
				return stop || !tasks.empty();
				});

			if (stop && tasks.empty()) {
				return;
			}
			task = tasks.front();
			tasks.pop_front();
		}
		task();
	}
}