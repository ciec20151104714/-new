int LED_PIN=13;

void setup () {                    // ��ʼ������ʽ����ʽ��ʼ�r�H����һ��
    pinMode (LED_PIN, OUTPUT);     // �Ԕ�λݔ����ʽ����Pin13
}

void loop () {                     // loop����ʽ�����}��������
    digitalWrite (LED_PIN, HIGH);  // ���_LED���l����O�ܣ�
    delay (1000);                  // �ȴ�һ�룬delay�Ⱥ���ֵ1000���������t1000���룬��һ�롣
    digitalWrite (LED_PIN, LOW);   // �P�]LED
    delay (1000);                  // �ȴ�һ��
}                                  // loop����ʽ�Y��

