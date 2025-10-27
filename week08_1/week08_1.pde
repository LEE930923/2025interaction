//week08_1_2048
//File-Perference
void setup(){
  size(410,410);//讓邊線亮一點
}
void draw(){
  background(188,174,162);
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      fill(206,194,185);//色採用滴管 吸範例的圖
      noStroke();//不要有黑線外框
      rect(j*100+10,i*100+10,90,90,5);//弧角是5
    }
  }
}
