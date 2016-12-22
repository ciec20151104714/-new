int LED_PIN=13;

void setup () {                    // 初始化副程式，程式起始時僅執行一次
    pinMode (LED_PIN, OUTPUT);     // 以數位輸出方式啟用Pin13
}

void loop () {                     // loop副程式，重複不斷執行
    digitalWrite (LED_PIN, HIGH);  // 打開LED（發光二極管）
    delay (1000);                  // 等待一秒，delay內含數值1000，代表延遲1000毫秒，即一秒。
    digitalWrite (LED_PIN, LOW);   // 關閉LED
    delay (1000);                  // 等待一秒
}                                  // loop副程式結束


int led = 13;  // 定义针脚号，数字类型为整型

// 对Arduino电路板或相关状态进行初始化方法
void setup() {
  // 设定13号针脚为输出状态，
  // pinMode()方法是Arduino类库提供的系统方法，
  // 调用的时候需要传入两个参数。
  // 一个是针脚号，另一个是针脚号的状态。
  pinMode(led, OUTPUT);
}
// 系统调用，无限循环方法
void loop() {
  // 向13号针脚输出值为高电压状态，
  // 此值可以点亮LED神灯。
  // digitalWrite()方法也是Arduino类库提供的系统方法，
  // 调用的时候需要传入两个参数，
  // 一个是针脚号，另一个是针脚号的状态。
  // 这里需要注意的是，pinMode()方法是初始化针脚状态，
  // digitalWrite()方法是向此针脚号不断发送状态。
  digitalWrite(led, HIGH);
  // delay()方法是Arduino自身类库提供的方法，
  // 功能是让时间延迟，其中传入的参数为毫秒单位，
  // 1000毫秒 = 1秒
  delay(1000);
  // 此处向Arduino的13针脚发送低电压状态，
  // 此状态可以让LED神灯熄灭
  digitalWrite(led, LOW);
  // 再次延迟1000毫秒，也即1秒钟，
  delay(1000);
  // 随后进入下一次loop循环，
  // 即调用上面的digitalWrite(led, HIGH)方法，
  // 让LED神灯再次点亮。
  // 如此不断循环下去。
}
