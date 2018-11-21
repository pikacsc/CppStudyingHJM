/*
HongJeongMo C++

Chapter J_3 std::thread, multi threading



*/
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx; //mutual exclusion

int main()
{
	const int num_pro = std::thread::hardware_concurrency();
	
	auto work_func = [](const string & name) //use lambda
	{
		for (int i = 0; i < 5; ++i)
		{
			this_thread::sleep_for(chrono::milliseconds(100));
			
			mtx.lock();
			cout << name << " " << this_thread::get_id() << " is working " << i << endl;
			mtx.unlock(); //make sure unlock() after task
		}
	};

	thread t1 = thread(work_func, "Jack");
	thread t2 = thread(work_func, "Dash");

	t1.join();
	t2.join();
	return 0;
}

