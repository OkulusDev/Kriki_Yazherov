#include "Yazher.h"

заложить племя ящерские_земли;

вождь_ящер() {
	непонятные_руны руны = "Мы захватим байкал у тупых русов!";
	рявкнуть << руны << ловкость_ящерская;

	цыфра мертвые_русы = 0;
	дума победа = правда; // это ложь, ящеры любят обманывать

	биться_до (мертвые_русы < 10 || победа == ложь) {
		мертвые_русы++;
		рявкнуть << "Племя убило уже " << мертвые_русы << " русов!" << ловкость_ящерская;
	}

	ежели (победа == ложь) {
		рявкнуть << "Все русы убиты!" << ловкость_ящерская;
	} а_то {
		рявкнуть << "Русы проклятые!" << ловкость_ящерская;
	}

	кинуть круг;
}