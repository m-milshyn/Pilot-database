public ref class Letchik
{
private:
    int age;
    System::String^ fullName;
    System::String^ aircraftType;
    int ejections;
    double weight;
    double height;
    bool hasHair;

public:
    property int Age {
        int get() {
            return age;
        }
        void set(int value) {
            if (value >= 0) {
                age = value;
            }
        }
    }

    property System::String^ FullName {
        System::String^ get() {
            return fullName;
        }
        void set(System::String^ value) {
            fullName = value;
        }
    }

    property System::String^ AircraftType {
        System::String^ get() {
            return aircraftType;
        }
        void set(System::String^ value) {
            aircraftType = value;
        }
    }

    property int Ejections {
        int get() {
            return ejections;
        }
        void set(int value) {
            if (value >= 0) {
                ejections = value;
            }
        }
    }

    property double Weight {
        double get() {
            return weight;
        }
        void set(double value) {
            if (value >= 0.0) {
                weight = value;
            }
        }
    }

    property double Height {
        double get() {
            return height;
        }
        void set(double value) {
            if (value >= 0.0) {
                height = value;
            }
        }
    }

    property bool HasHair {
        bool get() {
            return hasHair;
        }
        void set(bool value) {
            hasHair = value;
        }
    }

    Letchik()
    {
        age = 0;
        fullName = nullptr;
        aircraftType = nullptr;
        ejections = 0;
        weight = 0.0;
        height = 0.0;
        hasHair = false;
    }
};