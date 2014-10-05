package battleship.test

import org.junit.Test
import battleship.server.Server
import battleship.server.BackEnd
import battleship.server.MNetBackEnd
import battleship.server.MNetClient
import battleship.network.MNetNetworkClient
import battleship.network.GameClient
import battleship.SimpleGameClient
import battleship.ais.DumbAI

class Play {

  @Test
  def foo() {

    val port = 12345
    val server = new Server().addBackend(port, MNetBackEnd.FACTORY).init()

    val p1 = new SimpleGameClient(new DumbAI, "127.0.0.1", port).init();
    val p2 = new SimpleGameClient(new DumbAI, "127.0.0.1", port).init();

    Thread.sleep(5000)

    p2.close()
    p1.close()
    server.close()
  }

}