void setup() {
  size(100, 100);
}

void draw() {
  background(204);
  line(0, 0, mouseX, mouseY); // line x,y position
}

void mousePressed() {
  save("line.jpg");           // save filename
  println("saved...");        // print
