//#include<iostream>
//using namespace std;
//int main()
//{
//	srand(time(0));
//	int angle, ylow, yhigh, qoutient, hits = 0, i = 1;
//	for (i=1; i <= 500; i++)
//	{
//		
//		angle = rand() % 180;
//		ylow = rand() % 2;
//		yhigh = ylow + sin(angle);
//		if (yhigh >= 2)
//		{
//			hits = hits + 1;
//		}
//	}
//	if (hits >= 1) {
//		qoutient = 500 / hits;
//		cout << "the qoutient is" << qoutient;
//	}
//	else {
//		cout << "It never hits ";
//	}
//}