library ieee;
use ieee.std_logic_1164.all;

entity mux is
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
end mux;
architecture behave of mux is
begin 
    --q <= (s0 and s1 and A) or (s0 and s1 and B) or (s0 and s1 and C) or (s0 and s1 and D);                   --abA + abB + abC + abD
	process (A,B,C,D,s0,s1) is
	begin
	    if(s0 = '0' and s1 = '0') then
		    q <= A;
		elsif (s0 = '0' and s1 = '1') then 
		    q <= B;
		elsif (s0 = '1' and s1 = '0') then 
		    q <= C;
		else 
		    q <= D;
		end if;
	end process;
		
end behave;
	