//week06_4_float_fishX_fishY_for_many_x_y_for_k_N
void setup() {  
  size(600, 400);
}
float fishX = 300, fishY = 200;
float [] x = new float[100];
float [] y = new float[100];
int N = 0;
void draw() { 
  background(#C0ffee);
  for(int i=0; i<N; i++)
  {
    ellipse(x[i], y[i], 8, 8); // 飼料的陣列
    y[i]++;
    if(y[i]>400)
    {
      for(int k=i; k<N-1; k++)
      {
        x[k] = x[k+1];
        y[k] = y[k+1];
      }
      N--;
    }
  }
  println(N);
  ellipse(fishX, fishY, 30, 10); //魚
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
