package battleship.util;

public class WsUtil {
	public static final String mkAddress(final String address, final int port) {
		return "ws://" + address + ":" + port;
	}
}
