#include <iostream>
#include <mutex>
using namespace std;

// ============================================== Eager Singleton ====================================================== //

class SingletonEager {
    private:
        static SingletonEager object;
        int a;

        // Private Default Constructor
        SingletonEager() {};

    public:
        // Delete Copy Constructor
        SingletonEager(SingletonEager&) = delete;
        // Delete Copy Assignment Operator
        SingletonEager& operator=(const SingletonEager&) = delete;
        // Delete Move Constructor
        SingletonEager(SingletonEager&&) = delete;
        // Delete Move Assignment Operator
        SingletonEager& operator=(const SingletonEager&&) = delete;

        static SingletonEager& getInstance() {
            return object;
        }

        void setValue(int a) { this->a = a; }
        int getValue() { return a; }
};

SingletonEager SingletonEager::object = SingletonEager();

// ============================================== Lazy Singleton ====================================================== //

class SingletonLazy {
    private:
        static SingletonLazy* object;
        int a;

        // Private Default Constructor
        SingletonLazy() {};

    public:
        // Delete Copy Constructor
        SingletonLazy(SingletonLazy&) = delete;
        // Delete Copy Assignment Operator
        SingletonLazy& operator=(const SingletonLazy&) = delete;
        // Delete Move Constructor
        SingletonLazy(SingletonLazy&&) = delete;
        // Delete Move Assignment Operator
        SingletonLazy& operator=(const SingletonLazy&&) = delete;

        static SingletonLazy& getInstance() {
            if (!object) {
                object = new SingletonLazy();
            }
            return *object;
        }

        void setValue(int a) { this->a = a; }
        int getValue() { return a; }
};

SingletonLazy* SingletonLazy::object = nullptr;

// ============================================== Synchronized Singleton ====================================================== //

class SingletonSync {
    private:
        static SingletonSync* object;
        static mutex mtx;
        int a;

        // Private Default Constructor
        SingletonSync() {};

    public:
        // Delete Copy Constructor
        SingletonSync(SingletonSync&) = delete;
        // Delete Copy Assignment Operator
        SingletonSync& operator=(const SingletonSync&) = delete;
        // Delete Move Constructor
        SingletonSync(SingletonSync&&) = delete;
        // Delete Move Assignment Operator
        SingletonSync& operator=(const SingletonSync&&) = delete;

        static SingletonSync& getInstance() {
            lock_guard<mutex> lock(mtx);

            if (!object) {
                object = new SingletonSync();
            }
            return *object;
        }

        void setValue(int a) { this->a = a; }
        int getValue() { return a; }
};

SingletonSync* SingletonSync::object = nullptr;
mutex SingletonSync::mtx;

// ============================================== Double Locking Singleton ====================================================== //

class SingletonDoubleLocking {
    private:
        static SingletonDoubleLocking* object;
        static mutex mtx;
        int a;

        // Private Default Constructor
        SingletonDoubleLocking() {};

    public:
        // Delete Copy Constructor
        SingletonDoubleLocking(SingletonDoubleLocking&) = delete;
        // Delete Copy Assignment Operator
        SingletonDoubleLocking& operator=(const SingletonDoubleLocking&) = delete;
        // Delete Move Constructor
        SingletonDoubleLocking(SingletonDoubleLocking&&) = delete;
        // Delete Move Assignment Operator
        SingletonDoubleLocking& operator=(const SingletonDoubleLocking&&) = delete;

        static SingletonDoubleLocking& getInstance() {
            if (!object) {
                lock_guard<mutex> lock(mtx);
                if (!object) {
                    object = new SingletonDoubleLocking();
                }
            }
            return *object;
        }

        void setValue(int a) { this->a = a; }
        int getValue() { return a; }
};

SingletonDoubleLocking* SingletonDoubleLocking::object = nullptr;
mutex SingletonDoubleLocking::mtx;

// ============================================== =============== ====================================================== //

int main() {
    SingletonDoubleLocking& s1 = SingletonDoubleLocking::getInstance();
    SingletonDoubleLocking& s2 = SingletonDoubleLocking::getInstance();
    s1.setValue(10);
    cout << s2.getValue() << endl;
}