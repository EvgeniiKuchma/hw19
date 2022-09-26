#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
 int nod(int a, int b)
    {
        while (a > 0 && b > 0)

            if (a > b)
                a %= b; 

            else
                b %= a;

        return a + b;
    }
 
 
 int mirror_number(int num) 
 {
     int n = 0;
     while (num)//если правильно понимаю, данное условие в развернутом виде звучит так: пока num > 0 то true (то есть выполняется тело цикла)?
     {
         n = 10 * n + num % 10;
         num /= 10;
     }
     return n;
 }
 
 
 template<typename T>
 void retren_pozishion(T f_arr[],const int length, int num)
 {
     for (int i = 0; i < num; i++)
     {
         if (f_arr[i] == num)
             std::cout << i << ". ";
     }
 }
 template<typename T>
 void retren_pozishion1(T f_arr[],const int length, int num)
 {
  for (int j = 0; j < length; j++) 
  {
        std::sort(f_arr + num + 1 , f_arr + length);
        std::cout << f_arr[j] << " ";
  }
  std::cout << "\b.\n";      
 }    
 
 
 void arrl(int arr1[], const int len, int A, int B) 
 {
     srand(time(NULL));
     for (int i = 0; i < len; i++)
     {
         arr1[i] = rand() % (B - A) + A;
         std::cout << arr1[i] << ' ';
     }
     std::cout << "\b.\n";
 }
 int main()
 {
	
   setlocale (LC_ALL, "Russian");
   std::cout << "Zadacha 1: ";
   std::cout << "\nНаибольший общий делитель = " << nod(9, 12);
   std::cout << "\n\n";
    
  
   std::cout << "Zadacha 2: ";
   int n;
   std::cout << "\nВведите число: ";
   std::cin >> n;
   std::cout << "\nРезультат обратного введения = ";
   std::cout << mirror_number(n) << "\n\n";
   
   
   std::cout << "Zadacha 3: ";
   const int size = 12;
   int arr[size]{ 2,1,3,5,2,4,7,6,5,5,9,8 };
   std::cout << "\nIznachalnyi massive: ";
   for (int i = 0; i < size; i++)
       std::cout << arr[i] << ' ';
   std::cout << "\b. ";
   std::cout << "\n\n";
   std::cout << "poziciy vashego chisla v massive: ";
   retren_pozishion(arr, size, 5);
   std::cout << "\n\n"; 
   std::cout << "otsortirovanii massive sprava ot n: ";
   retren_pozishion1(arr, size, 5);
   std::cout << "\n\n";
   
   std::cout << "Zadacha 4: \n";
   const int size1 = 10;
   int arr2[size1]{};
   std::cout << "Massive ot 1 do 10: ";
   arrl(arr2, size1, 1, 10);
   std::cout << "\n\n";
   
   
   return 0;
 }