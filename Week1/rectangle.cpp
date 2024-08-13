#include <iostream>
using namespace std;

class RectangleType {
  private:
    float width, height;


  public:
  void setsize(float newHeight, float newWidth) {
    height = newHeight;
    width = newWidth;
  }


  void printRectangle() {
    cout << "The height is " << height << " and the length is " << width << endl;
  }

  float returnPerimeter() {
    return 2 * (width + height);

  }

  float returnArea() {
    return width * height;
  }



};

int main() {

  float height, width;

  RectangleType rec;

  cout << "enter height: ";
  cin >> height;

  cout << "enter width: ";
  cin >> width;

  rec.setsize(height, width);
  rec.printRectangle();

  cout << "the area of rectangle is: " << rec.returnArea()<< endl;
  cout << "the perimeter of rectangle is: "<< rec.returnPerimeter()<< endl;


  return 0;
}