void setup() {
int displayWidth=200;
int displayHeight=200;
size(displayWidth, displayHeight);
}
void draw() {
if (mousePressed){
  drawTarget(mouseX, mouseY);
  delay(1000);
}
}
  
  