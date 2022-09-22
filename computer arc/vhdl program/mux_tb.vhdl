library ieee;
use ieee.std_logic_1164.all;

entity mux_tb is
end mux_tb;

architecture test of mux_tb is 
    component mux
	port
	(
	    A: in std_ulogic;
		B: in std_ulogic;
		C: in std_ulogic;
		D: in std_ulogic;
	    s0: in std_ulogic;
		s1: in std_ulogic;
		q: out std_ulogic
	);
end component;
signal A,B,C,D,s0,s1,q: std_ulogic;
begin
    fulls_tb: mux port map (A=>A,B=>B,C=>C,D=>D,s0=>s0,s1=>s1,q=>q);
	process begin 
	
		A<= '0';
		B<= '1';
		C<= '1';
		D<= '0';
		wait for 1 ns;
		
		s0<= '0';
		s1<= '0';
		wait for 1 ns;
		
		s0<= '0';
		s1<= '1';
		wait for 1 ns;
		
		s0<= '1';
		s1<= '0';
		wait for 1 ns;
		
		s0<= '1';
		s1<= '1';
		wait for 1 ns;
		
		assert false report "Reach end";
		wait;
	end process;
end test;
