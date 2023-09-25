#pragma once
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <functional>
#include <deque>

class ThreadPool
{
private:
	bool stop = false;
	std::vector<std::thread>threads;
	std::deque<std::function<void()>> tasks;
	std::mutex queueMutex;
	std::condition_variable condition;
	void workerThread();

public:
	ThreadPool(int numThreads);
	~ThreadPool();
	void enqueueTask(std::function<void()> task);
};

