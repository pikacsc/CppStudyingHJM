/*
HongJeongMo C++

Chapter J_5 task-based paralleism, async, future, promise

*/

#include<iostream>
#include<future>
#include<thread>

using namespace std;

int main()
{
	//multi-threading
	//{
	//	int result;
	//	std::thread t([&] {result = 1 + 2; });
	//	t.join(); // waiting until thread t finished
	//	cout << result << endl;
	//}

	////task-based paralleism
	//{
	//	//std::future<int> fut = ...
	//	auto fut = std::async([] { return 1 + 2; });
	//	cout << fut.get() << endl; // fut.get() will waiting until fut got value
	//}

	//future and promise
	//{
	//	std::promise<int> prom;
	//	auto fut = prom.get_future();

	//	auto t = std::thread([](std::promise<int>&& prom)
	//	{
	//		prom.set_value(1 + 2);
	//	}, std::move(prom));
	//	cout << fut.get() << endl; //fut.get() will waiting until prom.set_value(1+2) finished;
	//	t.join();
	//}




	//async
	{
		//auto f1 = std::async([] {
		//	cout << "async1 start" << endl;
		//	this_thread::sleep_for(chrono::seconds(3));
		//	cout << "async1 end" << endl;
		//});

		//auto f2 = std::async([] {
		//	cout << "async2 start" << endl;
		//	this_thread::sleep_for(chrono::seconds(2));
		//	cout << "async2 end" << endl;
		//});

		//auto f3 = std::async([] {
		//	cout << "async3 start" << endl;
		//	this_thread::sleep_for(chrono::seconds(1));
		//	cout << "async3 end" << endl;
		//});

		//cout << "Main function" << endl;

		////result
		///*
		//Main functionasync1 start //random orders, sometimes async1 start first
		//async2 start
		//async3 start

		//async3 end
		//async2 end
		//async1 end
		//*/
	}

	//async without future
	{
		std::async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "async1 end" << endl;
		});

		std::async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async2 end" << endl;
		});

		std::async([] {
			cout << "async3 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async3 end" << endl;
		});

		cout << "Main function" << endl;

		//result
		/*Sequentially occurred, no random orders 
		async1 start //after that waiting 3seconds
		async1 end
		async2 start //after that waiting 2seconds
		async2 end
		async3 start //after that waiting 1seconds
		async3 end
		Main function
		*/
	}



	//thread
	//{
	//	auto f1 = std::thread([] {
	//		cout << "async1 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(3));
	//		cout << "async1 end" << endl;
	//	});

	//	auto f2 = std::thread([] {
	//		cout << "async2 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(2));
	//		cout << "async2 end" << endl;
	//	});

	//	auto f3 = std::thread([] {
	//		cout << "async3 start" << endl;
	//		this_thread::sleep_for(chrono::seconds(1));
	//		cout << "async3 end" << endl;
	//	});
	//	f1.join();
	//	f2.join();
	//	f3.join();

	//	cout << "Main function" << endl;

	//	//result
	//	/*
	//	async1 start
	//	async2 start
	//	async3 start
	//	async3 end
	//	async2 end
	//	async1 end
	//	Main function
	//	*/
	//}


	return 0;
}