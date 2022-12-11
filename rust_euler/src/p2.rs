/*
Fibonacci sequence whose values do not exceed four million.
Find the sum of the even-valued terms
*/

fn main() {
    let mut x1 = 1;
    let mut x2 = 1;
    let mut sum = 0;

    loop {
        (x1, x2) = (x2, x1 + x2);
        
        if x2 > 4000000 {
            break;
        }

        if x2 % 2 == 0 {
            sum = sum + x2;
        }
    }

    println!("Sum: {}", sum);
}