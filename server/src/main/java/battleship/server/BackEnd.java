package battleship.server;

public interface BackEnd {

	void init();

	void close();

	public interface Factory {
		BackEnd create(final int port, final NetworkListener listener);
	}

}
