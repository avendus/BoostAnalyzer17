std::pair<double, double> GetC1N2_hinoXSEC(double Chargino_Mass) {
 int mass_round = std::round(Chargino_Mass/25)*25;
 switch (mass_round) {
	case    100: return std::pair<double, double>(5.32595, 191.047);
	case    125: return std::pair<double, double>(2.35559, 88.5068);
	case    150: return std::pair<double, double>(1.21547, 49.5956);
	case    175: return std::pair<double, double>(0.693104, 30.2898);
	case    200: return std::pair<double, double>(0.424166, 20.1252);
	case    225: return std::pair<double, double>(0.273466, 13.7917);
	case    250: return std::pair<double, double>(0.183689, 9.91401);
	case    275: return std::pair<double, double>(0.127471, 7.29273);
	case    300: return std::pair<double, double>(0.0908167, 5.48175);
	case    325: return std::pair<double, double>(0.0661949, 4.21492);
	case    350: return std::pair<double, double>(0.0491579, 3.27086);
	case    375: return std::pair<double, double>(0.0371052, 2.59994);
	case    400: return std::pair<double, double>(0.028423, 2.08121);
	case    425: return std::pair<double, double>(0.0220262, 1.67896);
	case    450: return std::pair<double, double>(0.0172696, 1.36074);
	case    475: return std::pair<double, double>(0.0136457, 1.11821);
	case    500: return std::pair<double, double>(0.0108865, 0.923598);
	case    525: return std::pair<double, double>(0.008761, 0.768185);
	case    550: return std::pair<double, double>(0.00708913, 0.641762);
	case    575: return std::pair<double, double>(0.00576587, 0.535553);
	case    600: return std::pair<double, double>(0.00473741, 0.454855);
	case    625: return std::pair<double, double>(0.00389352, 0.384183);
	case    650: return std::pair<double, double>(0.00322106, 0.320722);
	case    675: return std::pair<double, double>(0.00268671, 0.275617);
	case    700: return std::pair<double, double>(0.00223385, 0.233891);
	case    725: return std::pair<double, double>(0.00187634, 0.199351);
	case    750: return std::pair<double, double>(0.00158082, 0.170376);
	case    775: return std::pair<double, double>(0.0013232, 0.145489);
	case    800: return std::pair<double, double>(0.00112392, 0.130506);
	case    825: return std::pair<double, double>(0.00094237, 0.106692);
	case    850: return std::pair<double, double>(0.000810952, 0.0964175);
	case    875: return std::pair<double, double>(0.000684339, 0.082671);
	case    900: return std::pair<double, double>(0.00058695, 0.0707011);
	case    925: return std::pair<double, double>(0.000501398, 0.0589374);
	case    950: return std::pair<double, double>(0.000431228, 0.0544187);
	case    975: return std::pair<double, double>(0.000371456, 0.0516039);
	case    1000: return std::pair<double, double>(0.000311324, 0.041882);
	case    1025: return std::pair<double, double>(0.000266049, 0.0330277);
	case    1050: return std::pair<double, double>(0.000236496, 0.0298371);
	case    1075: return std::pair<double, double>(0.00020709, 0.0290054);
	case    1100: return std::pair<double, double>(0.00017535, 0.0253133);
	case    1125: return std::pair<double, double>(0.000155963, 0.0236533);
	case    1150: return std::pair<double, double>(0.000130143, 0.0152935);
	case    1175: return std::pair<double, double>(0.000116732, 0.0184681);
	case    1200: return std::pair<double, double>(9.57498e-05, 0.0168516);
	case    1225: return std::pair<double, double>(8.59254e-05, 0.0158738);
	case    1250: return std::pair<double, double>(8.03461e-05, 0.0105191);
	case    1275: return std::pair<double, double>(7.03178e-05, 0.00972415);
	case    1300: return std::pair<double, double>(5.02516e-05, 0.00687453);
	case    1325: return std::pair<double, double>(5.0112e-05, 0.00682866);
	case    1350: return std::pair<double, double>(3.11342e-05, 0.00500265);
	case    1375: return std::pair<double, double>(2.99707e-05, 0.00393035);
	case    1400: return std::pair<double, double>(2.0026e-05, 0.00277541);
	case    1425: return std::pair<double, double>(2e-05, 0.00291342);
	case    1450: return std::pair<double, double>(2.00264e-05, 0.00295792);
	case    1475: return std::pair<double, double>(2.00743e-05, 0.00319031);
	case    1500: return std::pair<double, double>(1.00552e-05, 0.00183217);
  default: return std::pair<double, double>(-9999,-9999);
  }
}
