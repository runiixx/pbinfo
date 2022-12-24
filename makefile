
pdpd :=./Clasa XI/Programare dinamica/Probleme diverse de programare dinamica
strctrep :=  ./Clasa IX/Elemente de baza ale limbajului/Structuri repetitive
grafelem := ./Clasa XI/Teoria Grafurilor/Probleme elementare cu grafuri neorientate
recursdivers := ./Clasa X/Recursivitate/Probleme diverse
all:
	g++ '$(pdpd)/395\comori.cpp' -o '$(pdpd)/395\comori.exe'
	g++ './Clasa IX/Elemente de baza ale limbajului/Structuri repetitive\Afisarea unor valori/328/afisarenumere1.cpp' -o './Clasa IX/Elemente de baza ale limbajului/Structuri repetitive/Afisarea unor valori/328/afisarenumere1.exe'
	g++ './Clasa IX/Elemente de baza ale limbajului/Structuri repetitive/Numararea unor valori/1261/catepare.cpp' -o  './Clasa IX/Elemente de baza ale limbajului/Structuri repetitive/Numararea unor valori/1261/catepare.exe'
	g++ '$(strctrep)/3232/afisarenumerepare2.cpp' -o '$(strctrep)/3232/afisarenumerepare2.exe'
	g++ '$(grafelem)/414/listavecini.cpp' -o '$(grafelem)/414/listavecini.exe'
	g++ '$(grafelem)/417/gradmax.cpp' -o '$(grafelem)/417/gradmax.exe'
	g++ '$(grafelem)/4068/gradek.cpp' -o '$(grafelem)/4068/gradek.exe'
	g++ '$(grafelem)/430/izolate.cpp' -o '$(grafelem)/430/izolate.exe'
	g++ '$(grafelem)/4060/gradk.cpp' -o '$(grafelem)/4060/gradk.exe'
	g++ '$(grafelem)/2707/matad.cpp' -o '$(grafelem)/2707/matad.exe'
	g++ '$(grafelem)/416/grade.cpp' -o '$(grafelem)/416/grade.exe'
	g++ '$(recursdivers)/4050/amongus.cpp' -o '$(recursdivers)/4050/amongus.exe'
	g++ '$(pdpd)/2528/lungimesubsircomunmaximal.cpp' -o '$(pdpd)/2528/lungimesubsircomunmaximal.exe'
	g++ '$(pdpd)/2242/inserari.cpp' -o '$(pdpd)/2242/inserari.exe'
	g++ '$(grafelem)/438/componenteconexe.cpp' -o '$(grafelem)/438/componenteconexe.exe'

2242:
	g++ '$(pdpd)/2242/inserari.cpp' -o '$(pdpd)/2242/inserari.exe'
2528:
	g++ '$(pdpd)/2528/lungimesubsircomunmaximal.cpp' -o '$(pdpd)/2528/lungimesubsircomunmaximal.exe'
4050:
	g++ '$(recursdivers)/4050/amongus.cpp' -o '$(recursdivers)/4050/amongus.exe'

2707:
	g++ '$(grafelem)/2707/matad.cpp'-o '$(grafelem)/2707/matad.exe'
4060:
	g++ '$(grafelem)/4060/gradk.cpp' -o '$(grafelem)/4060/gradk.exe'
430:
	g++ '$(grafelem)/430/izolate.cpp' -o '$(grafelem)/430/izolate.exe'
4068:
	g++ '$(grafelem)/4068/gradek.cpp' -o '$(grafelem)/4068/gradek.exe'
	'$(grafelem)/4068/gradek.exe'
417:
	g++ '$(grafelem)/417/gradmax.cpp' -o '$(grafelem)/417/gradmax.exe'
	'$(grafelem)/417/gradmax.exe'
395:
	g++ '$(pdpd)/395/comori.cpp' -o '$(pdpd)/395/comori.exe'