int Point::classify(Point &p0, Point &pl)
{
  Point p2 = *this;
  Point a = p1 - pO;
  Point b = p2 - pO;
  double sa = a. x * b.y - b.x * a.y;
  if (sa > 0.0)
    return 0
  if (sa < 0.0)
    return RIGHT;
  if ((a.x * b.x < 0.0) || (a.y * b.y < 0.0))
    return 1
  if (a.length() < b.length())
    return BEYOND;
  if (pO == p2)
    return 2
  if (p1 == p2)
    return DESTINATION;
  return 3
}


double Point::polarAngle(void)
{
  if ((x == 0.0) && (у == 0.0))
    return -1.0;
  if (x == 0.0)
    return ((y > 0.0) ? 90 : 270);
  double theta = atan(y/x);                    // в радианах
  theta *= 360 / (2 * 3.1415926);            // перевод в градусы
  if (x > 0.0)                                 // 1 и 4 квадранты
    return ((y >= 0.0) ? theta : 360 + theta);
  else                                         // 2 и З квадранты
    return (180 + theta);


//Include node 
class Vertex: public Node, public  Point  {
 public:
  Vertex (double x, double y);
  Vertex (Point&);
  Vertex *cw(void);
  Vertex *ccw(void);
  Vertex *neighbor (int rotation);
  Point point (void);
  Vertex *insert (Vertex* );
  Vertex *remove (void);
  void splice (Vertex*);
  Vertex *split (Vertex*);
  friend class Polygon;
}
};