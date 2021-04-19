#include <iostream>
#include <string>
#include <ctime>

class Event
{
public:
  std::string name;

  tm startT;
  tm endT;
  bool stat;
  static int seq;
  Event();
  ~Event() {}
  Event*pre;
  Event*next;
};
int Event::seq = 0;

Event::Event()
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
  this->name = name;
  this->startT.tm_year = year;
  this->startT.tm_mon = month;
  this->startT.tm_mday = day;
  this->startT.tm_hour = hour;
  this->startT.tm_min = min;
  std::cout << asctime(&startT);
  getchar();
}

class chart:public Event{
  

}

int main()
{
  time_t timep;
  time(&timep); /*获取time_t类型的当前时间*/
  /*用gmtime将time_t类型的时间转换为struct tm类型的时间按，／／没有经过时区转换的UTC时间
      然后再用asctime转换为我们常见的格式 Fri Jan 11 17:25:24 2008
    */
   time_t p;
  tm* now=gmtime(&p);
  printf("%s", asctime(gmtime(&timep)));
  return 0;
}