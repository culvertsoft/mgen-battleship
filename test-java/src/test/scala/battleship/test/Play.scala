package battleship.test

import org.junit.Test
import battleship.server.Server
import battleship.server.BackEnd
import battleship.server.MNetBackEnd
import battleship.server.MNetClient
import battleship.network.MNetNetworkClient
import battleship.network.GameClient

class Play {

  @Test
  def foo() {
    
    val port = 12345
    
    val server = new Server().addBackend(port, MNetBackEnd.FACTORY)
    server.init()    
    Thread.sleep(100)
    
    val g1Network = new MNetNetworkClient("localhost", port)
    val p1 = new GameClient
    
    
    server.close()    
    Thread.sleep(1000)

  }

}