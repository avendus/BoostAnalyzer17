std::pair<double, double> GetC1N2_winoXSEC(double Chargino_Mass) {
 int mass_round = std::round(Chargino_Mass/25)*25;
switch (mass_round) {
	case    100: return std::pair<double, double>(22.6701, 0.973967);
	case    125: return std::pair<double, double>(10.0348, 0.457604);
	case    150: return std::pair<double, double>(5.18086, 0.253223);
	case    175: return std::pair<double, double>(2.95328, 0.154386);
	case    200: return std::pair<double, double>(1.80739, 0.101316);
	case    225: return std::pair<double, double>(1.16509, 0.0688042);
	case    250: return std::pair<double, double>(0.782487, 0.0487463);
	case    275: return std::pair<double, double>(0.54303, 0.0354083);
	case    300: return std::pair<double, double>(0.386936, 0.0263602);
	case    325: return std::pair<double, double>(0.281911, 0.0200201);
	case    350: return std::pair<double, double>(0.209439, 0.0154539);
	case    375: return std::pair<double, double>(0.15806, 0.0120956);
	case    400: return std::pair<double, double>(0.121013, 0.00961659);
	case    425: return std::pair<double, double>(0.093771, 0.00773547);
	case    450: return std::pair<double, double>(0.0734361, 0.0062389);
	case    475: return std::pair<double, double>(0.0580811, 0.00505005);
	case    500: return std::pair<double, double>(0.0463533, 0.00416461);
	case    525: return std::pair<double, double>(0.0372636, 0.00346763);
	case    550: return std::pair<double, double>(0.0301656, 0.00288065);
	case    575: return std::pair<double, double>(0.0245798, 0.00240183);
	case    600: return std::pair<double, double>(0.0201372, 0.00204438);
	case    625: return std::pair<double, double>(0.0165706, 0.00170195);
	case    650: return std::pair<double, double>(0.0137303, 0.00143519);
	case    675: return std::pair<double, double>(0.0113975, 0.00121937);
	case    700: return std::pair<double, double>(0.00951032, 0.00104092);
	case    725: return std::pair<double, double>(0.0079595, 0.000885243);
	case    750: return std::pair<double, double>(0.00669356, 0.000769988);
	case    775: return std::pair<double, double>(0.00563562, 0.000654544);
	case    800: return std::pair<double, double>(0.00475843, 0.000564061);
	case    825: return std::pair<double, double>(0.00402646, 0.000478362);
	case    850: return std::pair<double, double>(0.00342026, 0.000412315);
	case    875: return std::pair<double, double>(0.00290547, 0.000366257);
	case    900: return std::pair<double, double>(0.00249667, 0.000314019);
	case    925: return std::pair<double, double>(0.00212907, 0.00026801);
	case    950: return std::pair<double, double>(0.0018164, 0.000242682);
	case    975: return std::pair<double, double>(0.00156893, 0.000217618);
	case    1000: return std::pair<double, double>(0.00134352, 0.000175604);
	case    1025: return std::pair<double, double>(0.00115949, 0.000155683);
	case    1050: return std::pair<double, double>(0.000997903, 0.000133077);
	case    1075: return std::pair<double, double>(0.00086504, 0.000117638);
	case    1100: return std::pair<double, double>(0.000740372, 0.000107178);
	case    1125: return std::pair<double, double>(0.000647288, 9.17503e-05);
	case    1150: return std::pair<double, double>(0.000555594, 8.28113e-05);
	case    1175: return std::pair<double, double>(0.000486863, 6.44736e-05);
	case    1200: return std::pair<double, double>(0.000415851, 5.79252e-05);
	case    1225: return std::pair<double, double>(0.000362455, 5.61888e-05);
	case    1250: return std::pair<double, double>(0.000316975, 4.6491e-05);
	case    1275: return std::pair<double, double>(0.000276522, 4.30197e-05);
	case    1300: return std::pair<double, double>(0.000240739, 3.39561e-05);
	case    1325: return std::pair<double, double>(0.00020999, 2.88259e-05);
	case    1350: return std::pair<double, double>(0.000185601, 3.09793e-05);
	case    1375: return std::pair<double, double>(0.000161343, 2.31066e-05);
	case    1400: return std::pair<double, double>(0.000131074, 1.88826e-05);
	case    1425: return std::pair<double, double>(0.000121045, 1.84156e-05);
	case    1450: return std::pair<double, double>(0.000110889, 1.73553e-05);
	case    1475: return std::pair<double, double>(9.06868e-05, 1.53453e-05);
	case    1500: return std::pair<double, double>(8.13221e-05, 1.40102e-05);
   default: return std::pair<double, double>(-9999,-9999);
  }
}
