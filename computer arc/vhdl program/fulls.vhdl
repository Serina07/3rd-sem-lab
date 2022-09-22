library ieee;
use ieee.std_logic_1164.all;

entity fulls is
port 
    (
	a: in std_ulogic;
	b: in std_ulogic;
	bin: in std_ulogic;
	d: out std_ulogic;
	bor: out std_ulogic
	);
end fulls;
architecture behave of fulls is
begin 
    d<= (a xor b) xor bin;
	bor<= ((not a)and bin )or ((not a) and b) or (b and bin );
end behave;
	