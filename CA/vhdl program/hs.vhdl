library ieee;
use ieee.std_logic_1164.all;

entity hs is
    port
    (
        a: in std_ulogic;
        b: in std_ulogic;
        d: out std_ulogic;
        bor: out std_ulogic
    );
end hs;
architecture behave of hs is
begin
    d<= a xor b;
	bor<= not a and b;
end behave;
	