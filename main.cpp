
#include <iostream>

using namespace std;


class Devices
{
public:
        	virtual double Out()
        	{
                    	return 0;
        	}
        	virtual int Get()
        	{
                    	return 0;
        	}
};
        	class Analogue : public Devices
        	{
        	public:
                    	virtual double Out()
                    	{
                               	return 0;
                    	}
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
        	};


                    	class  OperAmpilifier : public Analogue
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "->Введіть напругу неiнвертуючого входу<- :";
                                           	cin >> NonInvertedOut;
                                           	cout << "->Введи напругу iнвертуючого входу<- :";
                                           	cin >> InvertedOut;
                                           	cout << "->Введи коефіцiєнт підсилення :<-";
                                           	cin >> AmplifiyingKoef;
                                           	OutputVoltage = (NonInvertedOut-InvertedOut)*AmplifiyingKoef;
                                           	return 0;
                               	}
                               	double Out()
                               	{
                                           	return OutputVoltage;
                               	}
                    	private:
                               	int InvertedOut,NonInvertedOut, AmplifiyingKoef, OutputVoltage;
                    	};




        	class Digital : public Devices
        	{
        	public:
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
        	};


                    	class Decoder : public Digital
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "???";
                                           	return 0;
                                                       	}

                    	private:
                    	};


                    	class BinaryAdder : public Digital
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "???";
                                           	return 0;

                               	}

                    	private:
                    	};


        	class Impulse : public Devices
        	{
        	public:
                    	virtual double Out()
                    	{
                               	return 0;
                    	}
                    	virtual int Get()
                    	{
                               	return 0;
                    	}
        	};

        	class SourceVoltage : public Impulse
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "Введіть силу струму:";
                                           	cin >> Amper;
                                           	cout << "Введіть опiр";
                                           	cin >> Resist;
                                           	Volt = Amper*Resist;
                                           	Power = Volt*Amper;
                    		}
                                           	double Out()
                               	{
                                            return Power;
                                           	return Volt;
                               	}

                    	private:
                               	int Amper, Resist, Volt, Power;
                    	};


                    	class CurrentSource : public Impulse
                    	{
                    	public:
                               	int Get()
                               	{
                                           	cout << "Введіть напругу:";
                                           	cin >> Volt;
                                           	cout << "Введіть опiр:";
                                           	cin >> Resist;
                                           	Amper=Volt/Resist;
                    		}
                                                       	double Out()
                               	{
                                           	return Amper;
                               	}

                    	private:
                               	int Amper, Resist, Volt;
                    	};



int main()
{
        	setlocale (LC_ALL,"Ukrainian");
        	cout << "Оберіть пристрiй:" << endl;
        	cout << "1. Операцiйний пiдсилювач" << endl;
        	cout << "2. Дешифратор двiйково-дестяковий" << endl;
        	cout << "3. Двiйковий суматор" << endl;
        	cout << "4. Джерело напруги" << endl;
        	cout << "5. Джерело струму" << endl;
        	int choise;
        	cin >> choise;
        	if (choise == 1)
        	{
                    	Analogue *ptr1 = new OperAmpilifier;
                    	ptr1->Get();
                    	cout << (ptr1->Out()) << endl;
        	}

        	else if (choise == 2)
        	{
                    	Digital *ptr2 = new Decoder;
                    	ptr2->Get();
                    	cout << (ptr2->Get()) << endl;
        	}
        	else if (choise == 3)
        	{
                    	Digital *ptr3 = new BinaryAdder;
                    	ptr3->Get();
                    	cout << (ptr3->Get()) << endl;
        	}
        	else if (choise == 4)
        	{
                    	Impulse *ptr4 = new SourceVoltage;
                    	ptr4->Get();
                    	cout << (ptr4->Out()) << endl;
        	}
                    	else if (choise == 6)
        	{
                    	Impulse *ptr5 = new SourceVoltage;
                    	ptr5->Get();
                    	cout << (ptr5->Out()) << endl;
        	}
        	else{
                    	cout << "Number is not valid" <<endl;
	return 0;
	}



                         if (choise == 6)
        	{
                    	Impulse *ptr5 = new SourceVoltage;
                    	ptr5->Get();
                    	cout << (ptr5->Out()) << endl;
        	}
        	            else
                    	cout << "" <<endl;
	                    return 0;
	}






