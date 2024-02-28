#include <stdio.h>

template <typename T1, typename T2>
class ClassName{
public:
	// メンバ変数
	T1 a;
	T2 b;

	// コンストラクタ
	//T1 ClassName(T1 a, T2 b) : a(a), b(b) {};

	// メンバ関数
	T1 Min(T1 a,T2 b) {
		if (a > b) {
			return b;
		}
		else {
			return a;
		}
	}
};

int main() {
	ClassName<float, int>b1;
	ClassName<float, double>b2;
	ClassName<float, float>b3;
	ClassName<int, double>b4;
	ClassName<int, int>b5;
	ClassName<double, double>b6;
	
	float A = b1.Min(0.1f, 1);
	float B = b2.Min(0.1f, 114);
	float C = b3.Min(0.1f, 0.2f);
	float D = b4.Min(1, 114);
	float E = b5.Min(1, 2);
	float F = b6.Min(114, 514);

	printf("%f\n", A);
	printf("%f\n", B);
	printf("%f\n", C);
	printf("%f\n", D);
	printf("%f\n", E);
	printf("%lf\n", F);
}