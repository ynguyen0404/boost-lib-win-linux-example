#include <boost/thread/thread.hpp>
#include <boost/chrono/chrono.hpp>
#include <iostream>


void wait(int seconds)
{
  boost::this_thread::sleep_for(boost::chrono::seconds{seconds});
}


void thread1()
{
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << std::endl;
  }
}

int main(int argc, char* argv[])
{
  boost::thread t(&thread1);
  t.join();

  system("pause");
  return 0;
}
