<?php
 
 function HumanizeFileSize($size) {
   $unidade = "bytes";
   
   if ($size > 1024) {
       $size = ($size / 1024);
       $unidade = "KB"; }
   if ($size > 1024) {
       $size = ($size / 1024);
       $unidade = "MB"; }
   if ($size > 1024) {
       $size = ($size / 1024);
       $unidade = "GB"; }
   if ($size > 1024) {
       $size = ($size / 1024);
       $unidade = "TB"; }
   
   $size = round($size, 0);
   return $size." ".$unidade;
}
 
?>
