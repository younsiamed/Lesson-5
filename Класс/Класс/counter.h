#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int value;

public:
    Counter();
    Counter(int initialValue);

    void increment();
    void decrement();

    int getValue() const;
};

#endif // COUNTER_H