#!/usr/bin/perl
#Algoritmo 2
#Fichero para automatización de ejecucion por lotes de un ejecutable 
#dado parametros de entrada

$repeticiones = 30;
@ejecutables= ("mainmatricesApp");
@matrizSize= ("100","200","400","800","1000","1200","2000","4000");
$path= "/Users/valentinagomez/projects/separada05/";

foreach $exe (@ejecutables){
	foreach $size (@matrizSize){
		$fichero= "$path"."Soluciones/"."$exe"."-size"."$size";
		#print("$fichero \n");
		for($i=0; $i<$repeticiones; $i++){
			#print("$path$exe $size \n");
			system("$path$exe $size >> $fichero");
		}
	}
}
exit(1);
