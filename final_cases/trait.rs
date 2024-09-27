// 定义一个 Trait，表示一个可以计算面积的形状
trait Shape {
    // 定义一个方法，用于计算面积
    fn area(&self) -> f64;
}

// 定义一个结构体 Circle，表示圆形
struct Circle {
    radius: f64,
}

// 为 Circle 实现 Shape trait
impl Shape for Circle {
    fn area(&self) -> f64 {
        std::f64::consts::PI * self.radius * self.radius
    }
}

// 定义一个结构体 Rectangle，表示矩形
struct Rectangle {
    width: f64,
    height: f64,
}

// 为 Rectangle 实现 Shape trait
impl Shape for Rectangle {
    fn area(&self) -> f64 {
        self.width * self.height
    }
}

fn main() {
    let circle = Circle { radius: 5.0 };
    let rectangle = Rectangle { width: 4.0, height: 6.0 };

    // 使用 trait 调用 area 方法
    println!("Circle area: {}", circle.area());
    println!("Rectangle area: {}", rectangle.area());
}
