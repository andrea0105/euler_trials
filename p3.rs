fn main() {

    let mut num: u64 = 600851475143;

    for i in 2..num {
        if num % i == 0 {
            println!("prime factor = {}", i);
            num = num / i;
        } else if num == 1 {
            break;
        }
    }
}