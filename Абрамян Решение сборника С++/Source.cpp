#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;


void begin1() {
	system("cls");
	double a;
	cout << "Begin1. Дана сторона квадрата a. Найти его периметр P=4*a" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double P = 4 * a;
	cout << "Периметр квадрата равен: " << P << endl;
	system("pause");
}
void begin2() {
	system("cls");
	double a;
	cout << "Begin2. Дана сторона квадрата a. Найти его площадь S=a^2" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double S = pow(a, 2);
	cout << "Площадь квадрата равна : " << S << endl;
	system("pause");
}
void begin3() {
	system("cls");
	double a, b;
	cout << "Begin3. Даны стороны прямоугольника a и b. Найти его площадь S=a*b и периметр P=2*(a+b)" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double S = a * b;
	double P = 2 * (a + b);
	cout << "Площадь прямоугольника равна : " << S << endl;
	cout << "Периметр прямоугольника равен : " << P << endl;
	system("pause");
}
void begin4() {
	system("cls");
	double d;
	cout << "Begin4. Дан диаметр окружности d. НАйти ее длину. В качестве значения пи использовать 3.14" << endl;
	cout << "Введите значение d: ";
	cin >> d;
	double L = 3.14 * d;
	cout << "Длина окружности равна : " << L << endl;
	system("pause");
}
void begin5() {
	system("cls");
	double a;
	cout << "Begin5. Дана длина ребра куба a. Найти объем куба V=a^3 и площадь его поверхности S=6*a^2" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double V = pow(a, 3);
	double S = 6 * pow(a, 2);
	cout << "Объем куба : " << V << endl;
	cout << "Площадь его поверхности : " << S << endl;
	system("pause");
}
void begin6() {
	system("cls");
	double a, b, c;
	cout << "Begin6." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	double V = a * b * c;
	double S = 2 * (a * b + b * c + a * c);
	cout << "Объем параллелепипеда : " << V << endl;
	cout << "Площадь поверхности параллелепипеда : " << S << endl;
	system("pause");
}
void begin7() {
	system("cls");
	double R;
	cout << "Begin7." << endl;
	cout << "Введите значение R: ";
	cin >> R;
	double L = 2 * 3.14 * R;
	double S = 3.14 * pow(R, 2);
	cout << "Длина окружности : " << L << endl;
	cout << "Площадь круга : " << S << endl;
	system("pause");
}
void begin8() {
	system("cls");
	double a, b;
	cout << "Begin8." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double x = (a + b) / 2;
	cout << "Среднее арифметическое : " << x << endl;
	system("pause");
}
void begin9() {
	system("cls");
	double a, b;
	cout << "Begin9." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double x = sqrt(a * b);
	cout << "Среднее геометрическое : " << x << endl;
	system("pause");
}
void begin10() {
	system("cls");
	double a, b;
	cout << "Begin10." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Квадрат суммы : " << a * a + 2 * a * b + b * b << endl;
	cout << "Квадрат разности : " << a * a - 2 * a * b + b * b << endl;
	cout << "Произведение квадратов : " << (a * a) * (b * b) << endl;
	cout << "Частное квадратов : " << (a * a) / (b * b) << endl;
	system("pause");
}
void begin11() {
	system("cls");
	double a, b;
	cout << "Begin11." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << " Сумма модулей : " << abs(a) + abs(b) << endl;
	cout << "Разность модулей : " << abs(a) - abs(b) << endl;
	cout << "Произведение модулей : " << abs(a) * abs(b) << endl;
	cout << "Частное модулей : " << abs(a) / abs(b) << endl;
	system("pause");
}
void begin12() {
	system("cls");
	double a, b;
	cout << "Begin12." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Длинна гиппотинузы : " << c << endl;
	cout << "Периметр : " << a + b + c << endl;
	system("pause");
}
void begin13() {
	system("cls");
	double R1, R2;
	cout << "Begin13." << endl;
	cout << "Введите значение R1: ";
	cin >> R1;
	cout << "Введите значение R2: ";
	cin >> R2;
	double S1 = M_PI * pow(R1, 2);
	double S2 = M_PI * pow(R2, 2);
	double S3 = S1 - S2;
	cout << "S1 : " << S1 << endl;
	cout << "S2 : " << S2 << endl;
	cout << "S2 : " << S3 << endl;
	system("pause");
}
void begin14() {
	system("cls");
	double L;
	cout << "Begin14." << endl;
	cout << "Введите значение L: ";
	cin >> L;

	double R = L / (2 * 3.14);
	double S = 3.14 * pow(R, 2);
	cout << "R : " << R << endl;
	cout << "S : " << S << endl;
	system("pause");
}
void begin15() {
	system("cls");
	double S;
	cout << "Begin15." << endl;
	cout << "Введите значение S: ";
	cin >> S;
	double D = sqrt(4 * S / 3.14);
	double L = 3.14 * D;
	cout << "L : " << L << endl;
	cout << "D : " << D << endl;
	system("pause");
}
void begin16() {
	system("cls");
	double x1, x2;
	cout << "Begin16." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Расстояние : " << abs(x2 - x1) << endl;
	system("pause");
}
void begin17() {
	system("cls");
	double a, b, c;
	cout << "Begin17." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	cout << "Расстояние AC : " << c - a << endl;
	cout << "Расстояние BC : " << c - b << endl;
	cout << "Их сумма : " << (c - a) + (c - b) << endl;
	system("pause");
}
void begin18() {
	system("cls");
	double a, b, c;
	cout << "Begin18." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	cout << "Расстояние AC : " << c - a << endl;
	cout << "Расстояние BC : " << c - b << endl;
	cout << "Их произведение : " << (c - a) * (c - b) << endl;
	system("pause");
}
void begin19() {
	system("cls");
	double x1, x2, y1, y2;
	cout << "Begin19." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "S = : " << abs(x2 - x1) * abs(y2 - y1) << endl;
	system("pause");
}
void begin20() {
	system("cls");
	double x1, x2, y1, y2;
	cout << "Begin20." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "Расстояние = : " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
	system("pause");
}
void begin21() {
	system("cls");
	double x1, x2, x3, y1, y2, y3;
	cout << "Begin21." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение x3: ";
	cin >> x3;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "Введите значение y3: ";
	cin >> y3;
	double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double P = a + b + c;
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Расстояние = : " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
	system("pause");
}
void begin22() {
	system("cls");
	double A, B, x;
	cout << "Begin22." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	x = A;
	A = B;
	B = x;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	system("pause");
}
void begin23() {
	system("cls");
	double A, B, C, x, y;
	cout << "Begin23." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	x = A;
	y = B;
	B = A;
	A = C;
	C = y;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	cout << "C : " << A << endl;
	system("pause");
}
void begin24() {
	system("cls");
	double A, B, C, x, y;
	cout << "Begin24." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	x = A;
	y = C;
	A = B;
	B = y;
	C = x;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	cout << "C : " << A << endl;
	system("pause");
}
void begin25() {
	system("cls");
	double x;
	cout << "Begin25." << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "y = " << 3 * pow(x, 6) - 6 * x * x - 7 << endl;
	system("pause");
}
void begin26() {
	system("cls");
	double x;
	cout << "Begin26." << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "y = " << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2 << endl;
	system("pause");
}
void begin27() {
	system("cls");
	double A, A2, A4, A8;
	cout << "Begin27." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	cout << "A^2" << A2 << " A^4= " << A4 << "  A^8= " << A8 << endl;
	system("pause");
}
void begin28() {
	system("cls");
	double A, A2, A3, A5, A10, A15;
	cout << "Begin28." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	A2 = A * A;
	A3 = A2 * A;
	A5 = A3 * A2;
	A10 = A5 * A5;
	A15 = A10 * A5;
	cout << "A^2" << A2 << " A^3= " << A3 << " A^5= " << A5 << "A^10" << A10 << " A^15= " << A15 << endl;
	system("pause");
}
void begin29() {
	system("cls");
	double a;
	cout << "Begin29." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Answer " << (3.14 * a) / 180 << endl;
	system("pause");
}
void begin30() {
	system("cls");
	double a;
	cout << "Begin30." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Answer " << (180 * a) / 3.14 << endl;
	system("pause");
}
void begin31() {
	system("cls");
	double T;
	cout << "Begin31." << endl;
	cout << "Введите значение Т: ";
	cin >> T;
	cout << "Answer " << (T - 32) * 5 / 9 << endl;
	system("pause");
}
void begin32() {
	system("cls");
	double T;
	cout << "Begin32." << endl;
	cout << "Введите значение Т: ";
	cin >> T;
	cout << "Answer " << (T * 1.8) + 32 << endl;
	system("pause");
}
void begin33() {
	system("cls");
	double x, A, Y;
	cout << "Begin33." << endl;
	cout << "Введите значение X: ";
	cin >> x;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение Y: ";
	cin >> Y;
	double chena_kg = A / x;
	double chena_Y = chena_kg * Y;

	cout << "Answer (1kg) " << chena_kg << endl;
	cout << "Answer (Y - kg) " << chena_Y << endl;
	system("pause");
}
void begin34() {
	system("cls");
	double x, A, Y, B;
	cout << "Begin34." << endl;
	cout << "Введите значение X: ";
	cin >> x;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение Y: ";
	cin >> Y;
	cout << "Введите значение B: ";
	cin >> B;
	double chena_konf = A / x;
	double chena_iris = B / Y;


	cout << "Answer (konf) " << chena_konf << endl;
	cout << "Answer (iris) " << chena_iris << endl;
	cout << "Answer (konf/iris) " << chena_konf / chena_iris << endl;
	system("pause");
}
void begin35() {
	system("cls");
	double V, U, T1, T2, S;
	cout << "Begin35." << endl;
	cout << "Введите значение V: ";
	cin >> V;
	cout << "Введите значение U: ";
	cin >> U;
	cout << "Введите значение T1: ";
	cin >> T1;
	cout << "Введите значение T2: ";
	cin >> T2;
	cout << "S= " << (T1 * V) + (T2 * (V - U)) << endl;
	system("pause");
}
void begin36() {
	system("cls");
	double V1, V2, T, S;
	cout << "Begin36." << endl;
	cout << "Введите значение V1: ";
	cin >> V1;
	cout << "Введите значение V2: ";
	cin >> V2;
	cout << "Введите значение T: ";
	cin >> T;
	cout << "Введите значение S: ";
	cin >> S;

	cout << "S= " << S + V1 * T + V2 * T << endl;
	system("pause");
}
void begin37() {
	system("cls");
	double V1, V2, T, S;
	cout << "Begin37." << endl;
	cout << "Введите значение V1: ";
	cin >> V1;
	cout << "Введите значение V2: ";
	cin >> V2;
	cout << "Введите значение T: ";
	cin >> T;
	cout << "Введите значение S: ";
	cin >> S;

	cout << "S= " << abs(S - (V1 * T + V2 * T)) << endl;
	system("pause");
}
void begin38() {
	system("cls");
	double A, B;
	cout << "Begin38." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "x= " << -B / A << endl;
	system("pause");
}
void begin39() {
	system("cls");
	double A, B, C;
	cout << "Begin39." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	double D = B * B - 4 * A * C;
	double x1 = (-B + sqrt(D)) / (A * 2);
	double x2 = (-B - sqrt(D)) / (A * 2);
	cout << "x1= " << x1 << endl;
	cout << "x2= " << x2 << endl;
	system("pause");
}
void begin40() {
	system("cls");
	double A, B, C;
	double A2, B2, C2;
	cout << "Begin40." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	cout << "Введите значение A2: ";
	cin >> A2;
	cout << "Введите значение B2: ";
	cin >> B2;
	cout << "Введите значение C2: ";
	cin >> C2;
	double D = A * B2 - A2 * B;
	double x = (C * B2 - C2 * B) / D;
	double y = (A * C2 - A2 * C) / D;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	system("pause");
}
void integer1() {
	system("cls");
	cout << "Integer1." << endl;
	int delimoe, raznost;
	cout << "Введите L: " << endl;
	cin >> delimoe;
	raznost = delimoe / 100;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer2() {
	system("cls");
	cout << "Integer2." << endl;
	int M, raznost;
	cout << "Введите M: " << endl;
	cin >> M;
	raznost = M / 1000;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer3() {
	system("cls");
	cout << "Integer3." << endl;
	int M, raznost;
	cout << "Введите M: " << endl;
	cin >> M;
	raznost = M / 1024;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer4() {
	system("cls");
	cout << "Integer4." << endl;
	int A, B, raznost;
	cout << "Введите A: " << endl;
	cin >> A;
	cout << "Введите B: " << endl;
	cin >> B;
	raznost = A / B;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer5() {
	system("cls");
	cout << "Integer5." << endl;
	int A, B, raznost;
	cout << "Введите A: " << endl;
	cin >> A;
	cout << "Введите B: " << endl;
	cin >> B;
	raznost = A % B;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer6() {
	system("cls");
	cout << "Integer6." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << cel << "\t" << ost << endl;
	system("pause");
}
void integer7() {
	system("cls");
	cout << "Integer7." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << cel + ost << endl;
	system("pause");
}
void integer8() {
	system("cls");
	cout << "Integer8." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << ost << cel << endl;
	system("pause");
}
void integer9() {
	system("cls");
	cout << "Integer9." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	cout << "Ответ: " << x << endl;
	system("pause");
}
void integer10() {
	system("cls");
	cout << "Integer10." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int y = A / 10;
	int z = A % 10;

	cout << "Ответ: " << z << "\t" << y << endl;
	system("pause");
}
void integer11() {
	system("cls");
	cout << "Integer11." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Произведение : " << x * y * z << endl;
	cout << "Сумма : " << x + y + z << endl;
	system("pause");
}
void integer12() {
	system("cls");
	cout << "Integer12." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << y << x << endl;
	system("pause");
}
void integer13() {
	system("cls");
	cout << "Integer13." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << y << x << endl;
	system("pause");
}
void integer14() {
	system("cls");
	cout << "Integer14." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << x << y << endl;
	system("pause");
}
void integer15() {
	system("cls");
	cout << "Integer15." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << y << x << z << endl;
	system("pause");
}
void integer16() {
	system("cls");
	cout << "Integer16." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << x << z << y << endl;
	system("pause");
}
void integer17() {
	system("cls");
	cout << "Integer17." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 1000;
	x = x % 1;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer18() {
	system("cls");
	cout << "Integer18." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 10000;
	x = x % 1;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer19() {
	system("cls");
	cout << "Integer19." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer20() {
	system("cls");
	cout << "Integer20." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 3600;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer21() {
	system("cls");
	cout << "Integer21." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	x = T - x * 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer22() {
	system("cls");
	cout << "Integer22." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	x = T - x * 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer23() {
	system("cls");
	cout << "Integer23." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 3600;
	x = T - x * 3600;
	x = x / 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer24() {
	system("cls");
	cout << "Integer24." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = T % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer25() {
	system("cls");
	cout << "Integer25." << endl;
	int T;
	cout << "Введите число : " << endl;
	cin >> T;
	int x = (T + 3) % 7;
	cout << "Ответ : " << x << endl;
	system("pause");
}
void integer26() {
	system("cls");
	cout << "Integer26." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = (T + 1) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer27() {
	system("cls");
	cout << "Integer27." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = (T + 5) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer28() {
	system("cls");
	cout << "Integer28." << endl;
	int T, N;
	cout << "Введите число: " << endl;
	cin >> T;
	cout << "Введите число N: " << endl;
	cin >> N;
	int x = (T + N - 1) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer29() {
	system("cls");
	cout << "Integer29." << endl;
	int A, B, C;
	cout << "Введите число A: " << endl;
	cin >> A;
	cout << "Введите число B: " << endl;
	cin >> B;
	cout << "Введите число C: " << endl;
	cin >> C;
	int S = A * B;
	int S2 = C * C;
	int max = S / S2;
	int ost = S - max * S2;
	cout << "Кол-во : " << max << endl;
	cout << "Остаток : " << ost << endl;
	system("pause");
}
void integer30() {
	system("cls");
	cout << "Integer30." << endl;
	int A;
	cout << "Введите число год: " << endl;
	cin >> A;
	int St = ((A - 1) / 100) + 1;

	cout << "Столетие: " << St << endl;
	system("pause");
}
void boolean1() {
	system("cls");
	cout << "Boolean1." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x > 0;
	cout << "Число положительное?: " << A << endl;
	system("pause");
}
void boolean2() {
	system("cls");
	cout << "Boolean2." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x % 2 != 0;
	cout << "Число положительное?: " << A << endl;
	system("pause");
}
void boolean3() {
	system("cls");
	cout << "Boolean3." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x % 2 == 0;
	cout << "Число нечетное: " << A << endl;
	system("pause");
}
void boolean4() {
	system("cls");
	cout << "Boolean4." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	x = A > 2 && B <= 3;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean5() {
	system("cls");
	cout << "Boolean5." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	x = A >= 0 && B <= -2;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean6() {
	system("cls");
	cout << "Boolean6." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	x = A < B&& B < C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean7() {
	system("cls");
	cout << "Boolean7." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	x = A < B&& B < C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean8() {
	system("cls");
	cout << "Boolean8." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean9() {
	system("cls");
	cout << "Boolean9." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 || B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean10() {
	system("cls");
	cout << "Boolean10." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 == 0 || A % 2 == 0 && B % 2 != 0;
	x = A % 2 != 0 && B % 2 == 0 || A % 2 == 0 && B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean11() {
	system("cls");
	cout << "Boolean11." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 != 0 || A % 2 == 0 && B % 2 == 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean12() {
	system("cls");
	cout << "Boolean12." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B > 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean13() {
	system("cls");
	cout << "Boolean13." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 || B > 0 || C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean14() {
	system("cls");
	cout << "Boolean14." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B <= 0 && C <= 0 || A <= 0 && B > 0 && C <= 0 || A <= 0 && B <= 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean15() {
	system("cls");
	cout << "Boolean15." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B > 0 && C <= 0 || A > 0 && B <= 0 && C > 0 || A <= 0 && B > 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean16() {
	system("cls");
	cout << "Boolean16." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;


	x = A >= 10 && A < 100 && A % 2 == 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean17() {
	system("cls");
	cout << "Boolean17." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;


	x = A >= 100 && A < 1000 && A % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean18() {
	system("cls");
	cout << "Boolean18." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;


	x = A == B || A == C || B == C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean19() {
	system("cls");
	cout << "Boolean19." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;


	x = A * (-1) == B || A * (-1) == C || C * (-1) == B;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean20() {
	system("cls");
	cout << "Boolean20." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = i != y || y != z;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean21() {
	system("cls");
	cout << "Boolean21." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = y - i == z - y && z - (y - i) * 2 == y - i;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean22() {
	system("cls");
	cout << "Boolean22." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = abs(y - i) == abs(z - y) && abs(z - (y - i) * 2) == abs(y - i);
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean23() {
	system("cls");
	cout << "Boolean23." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 1000;
	int y = (A / 100) % 10;
	int z = (A / 100) % 10;
	int p = A % 10;


	x = i == p && y == z;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean24() {
	system("cls");
	cout << "Boolean24." << endl;
	bool x;
	int A, B, C, D;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	D = B * B - 4 * A * C;
	x = D > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean25() {
	system("cls");
	cout << "Boolean25." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y>0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean26() {
	system("cls");
	cout << "Boolean26." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x > 0 && y < 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean27() {
	system("cls");
	cout << "Boolean27." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y>0 || x > 0 && y < 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean28() {
	system("cls");
	cout << "Boolean28." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y < 0 || x > 0 && y > 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean29() {
	system("cls");
	cout << "Boolean29." << endl;
	bool A;
	int x, y, x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = x >= x1 && x <= x2 && y >= y1 && y <= y2;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean30() {
	system("cls");
	cout << "Boolean30." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = a == b && b == c;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean31() {
	system("cls");
	cout << "Boolean31." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = a == b || b == c || a == c;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean32() {
	system("cls");
	cout << "Boolean32." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = c == sqrt(a * a + b * b) || a == sqrt(c * c + b * b) || b == sqrt(a * a + c * c);

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean33() {
	system("cls");
	cout << "Boolean33." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = c > 0 || a > 0 || b > 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean34() {
	system("cls");
	cout << "Boolean34." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = (x + y) % 2 != 0;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean35() {
	system("cls");
	cout << "Boolean35." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = (x1 + y1) % 2 == (x2 + y2) % 2;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean36() {
	system("cls");
	cout << "Boolean36." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = x1 == x2 || y2 == y1;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean37() {
	system("cls");
	cout << "Boolean37." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean38() {
	system("cls");
	cout << "Boolean38." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x1) == abs(y1 - y2);

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean39() {
	system("cls");
	cout << "Boolean39." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x2) == abs(y1 - y2) || (x1 == x2) || (y1 == y2);

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean40() {
	system("cls");
	cout << "Boolean40." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || abs(x1 - x2) == 2 && abs(y1 - y2) == 1;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void if1() {
	system("cls");
	cout << "If1." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if2() {
	system("cls");
	cout << "If2." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}
	else if (x < 0) {
		x = x - 2;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if3() {
	system("cls");
	cout << "If3." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}
	else if (x == 0) {
		x = 10;
	}
	else {
		x = x - 2;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if4() {
	system("cls");
	cout << "If4." << endl;
	int x, y, z, l = 0;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if (x > 0) {
		l++;
	}
	if (y > 0) {
		l++;
	}
	if (z > 0) {
		l++;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if5() {
	system("cls");
	cout << "If5." << endl;
	int x, y, z, l = 0, r = 0;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if (x > 0) {
		l++;
	}
	else if (x < 0) {
		r++;
	}
	if (y > 0) {
		l++;
	}
	else if (y < 0) {
		r++;
	}
	if (z > 0) {
		l++;
	}
	else if (z < 0) {
		r++;
	}

	cout << "Answer: " << x << endl;
	system("pause");
}
void if6() {
	system("cls");
	cout << "If6." << endl;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer: " <<x<< endl;
	}
	if (y > x) {
		cout << "Answer: " <<y<< endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if7() {
	system("cls");
	cout << "If7." << endl;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer: 1 " << endl;
	}
	if (y > x) {
		cout << "Answer: 2" << endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if8() {
	system("cls");
	cout << "If8." << endl;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer:  " << x << "\t" << y << endl;
	}
	if (y > x) {
		cout << "Answer: " << y << "\t" << x << endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if9() {
	system("cls");
	cout << "If9." << endl;
	double A, B, save;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	if (A > B) {
		save = B;
		B = A;
		A = save;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	else if (B > A) {
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if10() {
	system("cls");
	cout << "If10." << endl;
	double A, B, save1, save2;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	if (A != B) {
		save1 = B;
		save2 = A;
		B = save1 + save2;
		A = save1 + save2;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	if (B == A) {
		B = 0;
		A = 0;
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if11() {
	system("cls");
	cout << "If11." << endl;
	double A, B, more, less;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	if (A != B) {
		if (A > B) {
			more = A;
			less = B;
		}
		else if (A < B) {
			more = B;
			less = A;
		}
		A = more;
		B = more;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	else if (B == A) {
		B = 0;
		A = 0;
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if12() {
	system("cls");
	cout << "If12." << endl;
	int x, y, z, Lul=0;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if (x > y) {
		if (y > z) {
			Lul == z;
		}
		else if (z >= y) {
			Lul == y;
		}
	}
	else if (x < y) {
		if (x > z) {
			Lul == z;
		}
		else if (z >= x) {
			Lul == x;
		}
	}
	cout << "Answer: " << Lul << endl;
	system("pause");
}
void if13() {
	system("cls");
	cout << "If13." << endl;
	int x, y, z;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if ((y <= x) && (x <= z) || (y >= x) && (x >= z)) {
		cout << "Answer: " << x << endl;
	}
	else if ((x <= y) && (y <= z) || (x >= y) && (y >= z)) {
		cout << "Answer: " << y << endl;
	}
	else {
		cout << "Answer: " << z << endl;
	}
	system("pause");
}
void if14() {
	system("cls");
	cout << "If14." << endl;
	int x, y, z;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if ((x > y) && (x > z)) {
		cout << "Наибольшее: " << x << endl;
	}
	else if ( (y > x) && (y > z)) {
		cout << "Наибольшее: " << y << endl;
	}
	 else if ((z > y) && (z > x)) {
		cout << "Наибольшее: " << z << endl;
	}

	if ((x < y) && (z > x)) {
		cout << "Наименьшее: " << x << endl;
	}
	 else if ((y < x) && (z > y)) {
		cout << "Наименьшее: " << y << endl;
	}
	 else if ((z < y) && (x > z)) {
		cout << "Наименьшее: " << z << endl;
	}
	system("pause");
}
void if15() {
	system("cls");
	cout << "If15." << endl;
	int x, y, z, sum=0;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> z;
	if ((x > y) && (x > z)) {
		sum = sum +x;
	}
	else if ((y > x) && (y > z)) {
		sum = sum + y;
	}
	else if ((z > y) && (z > x)) {
		sum = sum + z;
	}

	if ((y <= x) && (x <= z) || (y >= x) && (x >= z)) {
		sum = sum + x;
	}
	else if ((x <= y) && (y <= z) || (x >= y) && (y >= z)) {
		sum = sum + y;
	}
	else {
		sum = sum + z;
	}
	cout << "Answer: " << sum << endl;
	system("pause");
}
void if16() {
	system("cls");
	cout << "If16." << endl;
	double A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	if ((A <= B) && (B <= C)) {
		A = A * 2;
		B = B * 2;
		C = C * 2;
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	else {
		A = A * (-1);
		B = B * (-1);
		C = C * (-1);
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	system("pause");
}
void if17() {
	system("cls");
	cout << "If17." << endl;
	double A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	if (((A <= B) && (B <= C))|| ((A>=B)&& (B>=C)) ) {
		A = A * 2;
		B = B * 2;
		C = C * 2;
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	else {
		A = A * (-1);
		B = B * (-1);
		C = C * (-1);
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	system("pause");
}
void if18() {
	system("cls");
	cout << "If18." << endl;
	double A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	if ((A == B) && (A != C)) {
		cout << "Answer: 3" << endl;
	}
	else if ((B == C) && (B != A)) {
		cout << "Answer: 1" << endl;
	}
	else if ((C == A) && (A != B)) {
		cout << "Answer: 2" << endl;
	}
	system("pause");
}
void if19() {
	system("cls");
	cout << "If19." << endl;
	int A, B, C, D;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	cout << "Введите число : " << endl;
	cin >> D;
	if ((A == B) & (B==D) && (A != C)) {
		cout << "Answer: 3" << endl;
	}
	else if ((B == C) && (D==B) & (B != A)) {
		cout << "Answer: 1" << endl;
	}
	else if ((C == A) && (D==C) & (A != B)) {
		cout << "Answer: 2" << endl;
	}
	else if ((C == A) && (B== C) & (D != B)) {
		cout << "Answer: 4" << endl;
	}
	system("pause");
}
void if20() {
	system("cls");
	cout << "If20." << endl;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	if (A-B > A-C) {
		cout << "Answer: C - ближе" << endl;
	}
	else if (A - B < A - C) {
		cout << "Answer: B - ближе" << endl;
	}
	else if (A - B == A - C) {
		cout << "Answer: B и C - равноудалены" << endl;
	}
	system("pause");
}
void if21() {
	system("cls");
	cout << "If21." << endl;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	if (x == 0 && y == 0) {
		cout << "0" << endl;
	}
	else if (x == 0 && y != 0) {
		cout << "1" << endl;
	}
	else if (x != 0 && y == 0) {
		cout << "2" << endl;
	}
	else {
		cout << "3" << endl;
	}
	
	system("pause");
}
void if22() {
	system("cls");
	cout << "If22." << endl;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	if (x > 0 && y > 0) {
		cout << "Первая четверть";
	}
	else if (x < 0 && y>0) {
		cout << "Вторая четверть";
	}
	else if (x < 0 && y < 0) {
		cout << "Третья четверть";
	}
	else {
		cout << "Четвертая четверть";
	}
	system("pause");
}

void if23() {
	system("cls");
	cout << "If23." << endl;
	int x, y, x2, y2, x3, y3, x4, y4;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;
	cout << "Введите число : " << endl;
	cin >> x3;
	cout << "Введите число : " << endl;
	cin >> y3;

	if (x2 == x3)
		cout << "x4:" << x << endl;
	else
		if (x3 == x)
			cout << "x4:" << x2 << endl;
		else
			cout << "x4:" << x3 << endl;

	if (y2 == y3)
		cout << "y4:" << y;
	else
		if (y3 == y)
			cout << "y4:" << y2;
		else
			cout << "y4:" << y2;
	system("pause");
}


void if24() {
	system("cls");
	cout << "If24." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x > 0) {
		cout << "Answer: " << 2 * sin(x);
	}
	else if (x <= 0) {
		cout << "Answer: " << 6 - x;
	}
	system("pause");
}
void if25() {
	system("cls");
	cout << "If25." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x < (-2) || x>2) {
		cout << "Answer: " << 2 * x;
	}
	else {
		cout << "Answer: " << -3 * x;
	}
	system("pause");
}

void if26() {
	system("cls");
	cout << "If26." << endl;
	double x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x <= 0) {
		cout << "Answer: " << (-1) * x;
	}
	else if (0 < x && x < 2) {
		cout << "Answer: " << x * x;
	}
	else if (x >= 2) {
		cout << "Answer: 4";
	}
	system("pause");
}
void if27() {
	system("cls");
	cout << "If27." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;

	if (x < 0) {
		cout << "Answer: " << x * 0;
	}
	else if (x % 2 == 0) {
		cout << "Answer: 1";
	}
	else {
		cout << "Answer: 4";
	}
	system("pause");
}
void if28() {
	system("cls");
	cout << "If28." << endl;
	int x;
	cout << "Введите год : " << endl;
	cin >> x;

	if (x % 100 == 0) {
		if (x % 400 == 0) { cout << "366 days"; }
		else { cout << "365 days"; }
	}
	else if (x % 4 == 0) {
		cout << "366 days";
	}
	else {
		cout << "365 days";
	}
	system("pause");
}
void if29() {
	system("cls");
	cout << "If29." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	if (x == 0) { cout << "Нулевое "; }
	else { cout << " Не нулевое "; }
	if (x > 0) { cout << " Положительное "; }
	else if (x < 0) { cout << " Отрицательное "; }

	if (x % 2 == 0 && x != 0) { cout << " Четное "; }
	else if (x % 2 != 0 && x != 0) { cout << " Нечетное "; }
	system("pause");
}
void if30() {
	system("cls");
	cout << "If30." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	if (x == 0) { cout << "Нулевое "; }
	else { cout << " Не нулевое "; }
	if (x > 0) { cout << " Положительное "; }
	else if (x < 0) { cout << " Отрицательное "; }

	if (x % 2 == 0 && x != 0) { cout << " Четное "; }
	else if (x % 2 != 0 && x != 0) { cout << " Нечетное "; }
	if (x >= 100) { cout << " Трехзначное число "; }
	else if (x >= 10) { cout << " Двузначное число "; }
	else { cout << "цифра"; }
	system("pause");
}
void case1() {
	system("cls");
	cout << "Case1." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 0:
		break;
	case 1:
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник";
		break;
	case 3:
		cout << "Среда";
		break;
	case 4:
		cout << "Четверг";
		break;
	case 5:
		cout << "Пятница";
		break;
	case 6:
		cout << "Суббота";
		break;
	case 7:
		cout << "Воскресение";
		break;
		system("pause");
	}
}

void case2() {
	system("cls");
	cout << "Case2." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Плохо";
		break;
	case 2:
		cout << "Неудовлетворительно";
		break;
	case 3:
		cout << "Удовлетворительно";
		break;
	case 4:
		cout << "Хорошо";
		break;
	case 5:
		cout << "Отлично";
		break;
	case 6:
		cout << "Суббота";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case3() {
	system("cls");
	cout << "Case3." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Зима";
		break;
	case 2:
		cout << "Зима";
		break;
	case 3:
		cout << "Весна";
		break;
	case 4:
		cout << "Весна";
		break;
	case 5:
		cout << "Весна";
		break;
	case 6:
		cout << "Лето";
		break;
	case 7:
		cout << "Лето";
		break;
	case 8:
		cout << "Лето";
		break;
	case 9:
		cout << "Осень";
		break;
	case 10:
		cout << "Осень";
		break;
	case 11:
		cout << "Осень";
		break;
	case 12:
		cout << "Зима";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case4() {
	system("cls");
	cout << "Case4." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "31";
		break;
	case 2:
		cout << "28";
		break;
	case 3:
		cout << "31";
		break;
	case 4:
		cout << "30";
		break;
	case 5:
		cout << "31";
		break;
	case 6:
		cout << "30";
		break;
	case 7:
		cout << "31";
		break;
	case 8:
		cout << "31";
		break;
	case 9:
		cout << "30";
		break;
	case 10:
		cout << "31";
		break;
	case 11:
		cout << "30";
		break;
	case 12:
		cout << "31";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case5() {
	system("cls");
	cout << "Case5." << endl;
	int x;
	double A, B;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	switch (x)
	{
	case 1:
		cout << A + B;
		break;
	case 2:
		cout << A - B;
		break;
	case 3:
		cout << A * B;
		break;
	case 4:
		cout << A / B;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}



int main() {
	setlocale(0, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned long long vibor = 1;
	while (vibor) {
		do {
			system("cls");
			cout << "Меню\nСделайте выбор ";
			cin >> vibor;
		} while (vibor < 0 || vibor > 150);
		switch (vibor)
		{
		case 0:
			break;
		case 1:
			begin1();
			break;
		case 2:
			begin2();
			break;
		case 3:
			begin3();
			break;
		case 4:
			begin4();
			break;
		case 5:
			begin5();
			break;
		case 6:
			begin6();
			break;
		case 7:
			begin7();
			break;
		case 8:
			begin8();
			break;
		case 9:
			begin9();
			break;
		case 10:
			begin10();
			break;
		case 11:
			begin11();
			break;
		case 12:
			begin12();
			break;
		case 13:
			begin13();
			break;
		case 14:
			begin14();
			break;
		case 15:
			begin15();
			break;
		case 16:
			begin16();
			break;
		case 17:
			begin17();
			break;
		case 18:
			begin18();
			break;
		case 19:
			begin19();
			break;
		case 20:
			begin20();
			break;
		case 21:
			begin21();
			break;
		case 22:
			begin22();
			break;
		case 23:
			begin23();
			break;
		case 24:
			begin24();
			break;
		case 25:
			begin25();
			break;
		case 26:
			begin26();
			break;
		case 27:
			begin27();
			break;
		case 28:
			begin28();
			break;
		case 29:
			begin29();
			break;
		case 30:
			begin30();
			break;
		case 31:
			begin31();
			break;
		case 32:
			begin32();
			break;
		case 33:
			begin33();
			break;
		case 34:
			begin34();
			break;
		case 35:
			begin35();
			break;
		case 36:
			begin36();
			break;
		case 37:
			begin37();
			break;
		case 38:
			begin38();
			break;
		case 39:
			begin39();
			break;
		case 40:
			begin40();
			break;
		case 41:
			integer1();
			break;
		case 42:
			integer2();
			break;
		case 43:
			integer3();
			break;
		case 44:
			integer4();
			break;
		case 45:
			integer5();
			break;
		case 46:
			integer6();
			break;
		case 47:
			integer7();
			break;
		case 48:
			integer8();
			break;
		case 49:
			integer9();
			break;
		case 50:
			integer10();
			break;
		case 51:
			integer11();
			break;
		case 52:
			integer12();
			break;
		case 53:
			integer13();
			break;
		case 54:
			integer14();
			break;
		case 55:
			integer15();
			break;
		case 56:
			integer16();
			break;
		case 57:
			integer17();
			break;
		case 58:
			integer18();
			break;
		case 59:
			integer19();
			break;
		case 60:
			integer20();
			break;
		case 61:
			integer21();
			break;
		case 62:
			integer22();
			break;
		case 63:
			integer23();
			break;
		case 64:
			integer24();
			break;
		case 65:
			integer25();
			break;
		case 66:
			integer26();
			break;
		case 67:
			integer27();
			break;
		case 68:
			integer28();
			break;
		case 69:
			integer29();
			break;
		case 70:
			integer30();
			break;
		case 71:
			boolean1();
			break;
		case 72:
			boolean2();
			break;
		case 73:
			boolean3();
			break;
		case 74:
			boolean4();
			break;
		case 75:
			boolean5();
			break;
		case 76:
			boolean6();
			break;
		case 77:
			boolean7();
			break;
		case 78:
			boolean8();
			break;
		case 79:
			boolean9();
			break;
		case 80:
			boolean10();
			break;
		case 81:
			boolean11();
			break;
		case 82:
			boolean12();
			break;
		case 83:
			boolean13();
			break;
		case 84:
			boolean14();
			break;
		case 85:
			boolean15();
			break;
		case 86:
			boolean16();
			break;
		case 87:
			boolean17();
			break;
		case 88:
			boolean18();
			break;
		case 89:
			boolean19();
			break;
		case 90:
			boolean20();
			break;
		case 91:
			boolean21();
			break;
		case 92:
			boolean22();
			break;
		case 93:
			boolean23();
			break;
		case 94:
			boolean24();
			break;
		case 95:
			boolean25();
			break;
		case 96:
			boolean26();
			break;
		case 97:
			boolean27();
			break;
		case 98:
			boolean28();
			break;
		case 99:
			boolean29();
			break;
		case 100:
			boolean30();
			break;
		case 101:
			boolean31();
			break;
		case 102:
			boolean32();
			break;
		case 103:
			boolean33();
			break;
		case 104:
			boolean34();
			break;
		case 105:
			boolean35();
			break;
		case 106:
			boolean36();
			break;
		case 107:
			boolean37();
			break;
		case 108:
			boolean38();
			break;
		case 109:
			boolean39();
			break;
		case 110:
			boolean40();
			break;
		case 111:
			if1();
			break;
		case 112:
			if2();
			break;
		case 113:
			if3();
			break;
		case 114:
			if4();
			break;
		case 115:
			if5();
			break;
		case 116:
			if6();
			break;
		case 117:
			if7();
			break;
		case 118:
			if8();
			break;
		case 119:
			if9();
			break;
		case 120:
			if10();
			break;
		case 121:
			if11();
			break;
		case 122:
			if12();
			break;
		case 123:
			if13();
			break;
		case 124:
			if14();
			break;
		case 125:
			if15();
			break;
		case 126:
			if16();
			break;
		case 127:
			if17();
			break;
		case 128:
			if18();
			break;
		case 129:
			if19();
			break;
		case 130:
			if20();
			break;
		case 131:
			if21();
			break;
		case 132:
			if22();
			break;
		case 133:
			if23();
			break;
		case 134:
			if24();
			break;
		case 135:
			if25();
			break;
		case 136:
			if26();
			break;
		case 137:
			if27();
			break;
		case 138:
			if28();
			break;
		case 139:
			if29();
			break;
		case 140:
			if30();
			break;
		case 141:
			case1();
			break;
		case 142:
			case2();
			break;
		case 143:
			case3();
			break;
		case 144:
			case4();
			break;
		case 145:
			case5();
			break;
		default:

			break;
		}
	}

}