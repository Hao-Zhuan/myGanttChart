#include <iostream>
#include <string>
#include <ctime>

class Event
{
public:
  std::string name;
  std::string startT;
  std::string endT;

  time_t startT;
  time_t endT;
  bool stat;
  static int seq;
  Event()
  {
    int month, day, hour, min, year = 2021;
    std::string name;
    std::cout << "请输入任务名称" << std::endl;
    std::cin >> year;
    std::cout << "请输入任务开始年份" << std::endl;
    std::cin >> year;
    std::cout << "请输入任务开始月份" << std::endl;
    std::cin >> month;
    std::cout << "请输入任务开始日期" << std::endl;
    std::cin >> day;
    std::cout << "请输入任务开始小时（24小时制）" << std::endl;
    std::cin >> hour;
    std::cout << "请输入任务开始分钟" << std::endl;
    std::cin >> min;
  }
};
int Event::seq = 0;

int main()
{
  std::cout << Event::seq;
  return 0;
}