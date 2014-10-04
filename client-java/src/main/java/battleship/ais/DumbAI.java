package battleship.ais;

import java.util.List;
import java.util.Random;
import java.util.UUID;

import battleship.AI;
import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.ShipSunk;
import battleship.state.Game;
import battleship.state.Phase;
import battleship.state.Player;
import battleship.state.Ship;
import battleship.state.Team;
import battleship.state.Vec2;
import battleship.util.ListUtil;

public class DumbAI implements AI {

	private final Random m_randomizer = new Random();
	private Team m_team;
	private Game m_game;

	@Override
	public String selectName() {
		System.out.println(this + " selectName()");
		return getClass().getSimpleName() + "-" + UUID.randomUUID().toString();
	}

	@Override
	public Team selectTeam() {
		System.out.println(this + " selectTeam()");
		return Math.random() < 0.5 ? Team.RED : Team.BLUE;
	}

	@Override
	public List<Ship> placeShips() {
		System.out.println(this + " placeShips()");
		final Ship s2 = new Ship(0, 0, 2, true);
		final Ship s3 = new Ship(0, 1, 3, true);
		final Ship s4 = new Ship(0, 2, 4, true);
		final Ship s5 = new Ship(0, 3, 5, true);
		final Ship s6 = new Ship(0, 4, 6, true);
		return ListUtil.create(s2, s3, s4, s5, s6);
	}

	@Override
	public Vec2 makeShot(Game gameState) {
		System.out.println(this + " makeShot()");
		m_game = gameState;
		final Player player = m_game.getPlayer(m_team);
		final battleship.state.Map opponentMap = m_game.getOpponentMap(m_team);
		while (true) {
			final int x = m_randomizer.nextInt(opponentMap.getSize().getX());
			final int y = m_randomizer.nextInt(opponentMap.getSize().getY());
			if (!player.hasFiredAt(x, y)) {
				return new Vec2(x, y);
			}
		}
	}

	@Override
	public void assignedTeam(Team team) {
		System.out.println(this + " assignedTeam: " + team);
		m_team = team;
	}

	@Override
	public void shotFired(FireResult shotResultMsg) {
	}

	@Override
	public void shipSunk(ShipSunk sinkMsg) {
	}

	@Override
	public void gameOver(GameOver gameOverMsg) {
	}

	@Override
	public void gamePhaseChanged(Phase newPhase) {
	}

}
