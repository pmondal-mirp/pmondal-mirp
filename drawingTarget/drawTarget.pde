void drawTarget(float X, float Y) {
  if (mousePressed){
    for(int i=5; i>=0; i--) {
      if(i%2==1) {
      fill(0);
      ellipse(mouseX, mouseY, 10*i, 10*i);
      }
      else {
        fill(255);
      ellipse(mouseX, mouseY, 10*i, 10*i);
      }
    }
  }
}