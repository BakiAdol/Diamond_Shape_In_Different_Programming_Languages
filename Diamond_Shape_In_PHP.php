<?php
	
	$Height=9;
	$Mid=floor($Height/2);

    for($row=0;$row<$Height;$row++)
    {
        if($row>$Mid)
        {
            for($col=0;$col<$row-$Mid;$col++)
            {
                echo " ";
            }
            for($col=$row-$Mid;$col<$Height-$row+$Mid;$col++)
            {
                echo "*";
            }
        }
        else
        {
            for($col=0;$col<$Mid-$row;$col++)
            {
                echo " ";
            }
            for($col=$Mid-$row;$col<=$Mid+$row;$col++)
            {
                echo "*";
            }
        }
        echo "\n";
    }
	
?>
