mergeInto(LibraryManager.library, {
     	multiply_in_js: function(x,y) 
{		
    		document.getElementById("output_area").innerHTML += "\n" + "multiplying in js : " + x + "and" + y + "\n" ;
  		return x* y;
},

 });