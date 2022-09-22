library ieee;
use ieee.std_logic_1164.all;

entity fulls_tb is
end fulls_tb;

architecture test of fulls_tb is 
    component fulls
	port
	(
	    a: in std_ulogic;
		b: in std_ulogic;
		bin: in std_ulogic;
		d: out std_ulogic;
		bor: out std_ulogic
	);
end component;
signal a,b,bin,d,bor: std_ulogic;
begin
    fulls_tb: fulls port map (a=>a,b=>b,bin=>bin,d=>d,bor=>bor);
	process begin 
	
		a<= 'X';
		b<= 'X';
		bin<= 'X';
		wait for 1 ns;
		
		a<= '0';
		b<= '0';
		bin<= '0';
		wait for 1 ns;
		
		a<= '0';
		b<= '0';
		bin<= '1';
		wait for 1 ns;
		a<= '0';
		b<= '1';
		bin<= '0';
		wait for 1 ns;
		
		a<= '0';
		b<= '1';
		bin<= '1';
		wait for 1 ns;
		
		a<= '1';
		b<= '0';
		bin<= '0';
		wait for 1 ns;
		
		a<='1';
		b<='0';
		bin<='1';
		wait for 1 ns;
		
		a<= '1';
		b<= '1';
		bin<= '0';
		wait for 1 ns;
		
		a<= '1';
		b<= '1';
		bin<= '1';
		wait for 1 ns;
		
		assert false report "Reach end";
		wait;
	end process;
end test;
