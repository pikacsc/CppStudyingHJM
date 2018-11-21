/*
HongJeongMo C++

Chapter J_4 Race Condition, std::atomic, std::scoped_lock

*/

#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;

int main()
{
	int shared_memory(0);
	//std::atomic<int> shared_memory(0); // To avoid race condition, use std::atomic, however it can be slower then normal

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			this_thread::sleep_for(chrono::milliseconds(1));

			//mtx.lock(); // or you can use mutex lock in tead atomic, so that only one thread can access it
			

			//if you use lock_guard, lock(), unlock() will automatically occured, recommended
			//std::lock_guard<mutex> guard(mtx);
			std::scoped_lock<mutex> guard(mtx);//or use scoped_lock, unlock() it when escape the scope, highly recommended, C++17 provided
			shared_memory++;
			
			
			//mtx.unlock(); // when you use mutex lock, make sure unlock() it, becareful exception, function unwinding
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func); 

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;//without using std::atomic, result will be random, because of Race Condition


	return 0;
}