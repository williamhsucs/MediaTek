/*
 * 保證 n 一定是上面五個數字之一，不能用 if 和 switch case，請用你認為最快的方法實作main
 *            (下面)
 * 
 * 題目是在問，void main(int n)，這個參數 n 一定是1~5這5個數字
 * 但是題目用了if做判斷，如果 n = 1 ~ 5，則執行對應function
 * 要求你使用非if的方法，達成相同功能
 */

/* 題目 */
extern void func1(void);
extern void func2(void);
extern void func3(void);
extern void func4(void);
extern void func5(void);

void main(int n) {
  if n==1 execute func1;
  if n==2 execute func2;
  if n==3 execute func3;
  if n==4 execute func4;
  if n==5 execute func5;
}

/* 作答 */
void main(int n) {
  void (*fp[5]) ();  // 宣告指標Function陣列
  fp[0] = func1;     // 每個陣列指向特定Function
  fp[1] = func2;
  fp[2] = func3;
  fp[3] = func4;
  fp[4] = func5;
  fp[n-1]();         // 最後透過 n-1 直接呼叫對應Function
}