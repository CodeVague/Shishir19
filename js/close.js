var modal = document.getElementsByClassName("modal");
function close(){
  for(var k = 0; k<modal.length;++k){
  modal[k].style.display = "none";}
}
for (var i = 0; i < modal.length; ++i) {
  modal[i].addEventListener('click', close, false);
}