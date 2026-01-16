/**************************************************************
 * 빌더 패턴을 사용하는 애플리케이션 파일                     *
 **************************************************************/
#include "director.h"

int main()
{
  // 여행 유형 선택
  int type=1; 

  bool tour1_used = false;
  bool tour2_used = false;
  bool tour3_used = false;

  while(type >= 1 && type <= 3){
    cout << "Enter the type of vacation (1, 2, 3): ";
    cin >> type;

    if (type == 1) tour1_used = true;
    else if (type == 2) tour2_used = true;
    else if (type == 3) tour3_used = true;
    // 여행 계획 확인
    Director::book(type);

    if (tour1_used && tour2_used && tour3_used)
        break;
  }
  return 0;
}