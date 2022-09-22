library ieee;
use ieee.std_logic_1164.all;

entity hs_tb is
end hs_tb;

architecture test of hs_tb is
    component hs
	port 
	(
	    a: in std_ulogic;
		b: in std_ulogic;
		d: out std_ulogic;
		bor: out std_ulogic
	);
	
end component;

signal a,b,d,bor: std_ulogic;
begin
    half_subtracter: hs port map (a=>a,b=>b,d=>d,bor=>bor);
	
process begin 
    a<= 'X';
	b<= 'X';
	wait for 1 ns;
	a<= '0';
	b<= '0';
	wait for 1 ns;
	a<= '1';
	b<= '0';
	wait for 1 ns;
	a<= '0';
	b<= '1';
	wait for 1 ns;
	a<= '1';
	b<= '1';
	wait for 1 ns;
assert false report "that's it";
wait;
end process;
end test;