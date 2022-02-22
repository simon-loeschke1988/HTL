-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema faradisoDB
-- -----------------------------------------------------
-- Die gemeinsame Übungs-Datenbank desd Fahrradverleihs Faradiso

-- -----------------------------------------------------
-- Schema faradisoDB
--
-- Die gemeinsame Übungs-Datenbank desd Fahrradverleihs Faradiso
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `faradisoDB` DEFAULT CHARACTER SET utf8 COLLATE utf8_bin ;
USE `faradisoDB` ;

-- -----------------------------------------------------
-- Table `faradisoDB`.`Kunden`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `faradisoDB`.`Kunden` ;

CREATE TABLE IF NOT EXISTS `faradisoDB`.`Kunden` (
  `idKunden` INT UNSIGNED NOT NULL,
  `K_Anrede` VARCHAR(10) NULL,
  `K_Nachname` VARCHAR(45) NOT NULL,
  `K_Vorname` VARCHAR(45) NOT NULL,
  `K_Strasse` VARCHAR(45) NULL,
  `K_PLZ` VARCHAR(7) NOT NULL,
  `K_Ort` VARCHAR(30) NOT NULL,
  `K_TelNr` VARCHAR(15) NULL,
  `K_Email` VARCHAR(45) NULL,
  PRIMARY KEY (`idKunden`),
  UNIQUE INDEX `idKunden_UNIQUE` (`idKunden` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `faradisoDB`.`PreisGruppe`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `faradisoDB`.`PreisGruppe` ;

CREATE TABLE IF NOT EXISTS `faradisoDB`.`PreisGruppe` (
  `idPreisGruppe` INT UNSIGNED NOT NULL,
  `PG_Bezeichnung` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idPreisGruppe`),
  UNIQUE INDEX `idPreisGruppe_UNIQUE` (`idPreisGruppe` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `faradisoDB`.`Fahrraeder`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `faradisoDB`.`Fahrraeder` ;

CREATE TABLE IF NOT EXISTS `faradisoDB`.`Fahrraeder` (
  `idFahrraeder` INT UNSIGNED NOT NULL,
  `F_Hersteller` VARCHAR(45) NOT NULL,
  `F_Bezeichnung` VARCHAR(30) NOT NULL,
  `F_Art` VARCHAR(20) NOT NULL,
  `Rahmengroesse` SMALLINT UNSIGNED NOT NULL COMMENT 'in cm und ganzen Zahlen',
  `F_AnschaffungsPreis` DECIMAL NOT NULL,
  `F_AnschaffungsDatum` DATE NOT NULL,
  `F_LetzteWartung` DATE NULL,
  `F_Sonderzubehoer` VARCHAR(45) NULL,
  `F_FahrgestellNr` VARCHAR(30) NOT NULL,
  `F_FSidPreisGruppe` INT UNSIGNED NOT NULL COMMENT 'Fremdschlüssel zur Preisgruppe',
  PRIMARY KEY (`idFahrraeder`),
  UNIQUE INDEX `idFahrraeder_UNIQUE` (`idFahrraeder` ASC),
  INDEX `fk_Fahrraeder_PreisGruppe_idx` (`F_FSidPreisGruppe` ASC),
  CONSTRAINT `fk_Fahrraeder_PreisGruppe`
    FOREIGN KEY (`F_FSidPreisGruppe`)
    REFERENCES `faradisoDB`.`PreisGruppe` (`idPreisGruppe`)
    ON DELETE RESTRICT
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- -----------------------------------------------------
-- Data for table `faradisoDB`.`Kunden`
-- -----------------------------------------------------
START TRANSACTION;
USE `faradisoDB`;
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (16, 'Frau', 'Adler', 'Astrid', 'Günthersburgstr. 56', 'D-40213', 'Düsseldorf', '0211 543210', 'astrid.adler@hotmail.com');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (25, 'Herr', 'Anini', 'Hans', 'Buchlandenweg 120', 'D-89075', 'Ulm', '0731 4538254', 'h.anini@gmail.com');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (23, 'Herr', 'Bader', 'Michael', 'Blautalallee 235', 'D-89075', 'Ulm', '4567890', 'mi.bader@web.de');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (6, 'Frau', 'Müller', 'Andrea', 'Adelheidstr. 13', 'D-88446', 'Biberach', '07364/894623', 'andrea.m@web.de');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (3, 'Herrn', 'Müller', 'Hans', 'Friedberger Landstra. 204', 'D-89077', 'Augsburg', '0821/434343', 'hansi.mu@gmail.com');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (2, 'Frau', 'Müller', 'Herta', 'Ringellstr. 2', 'D-86416', 'Krumbach', '08282/465432', 'herta.mueller55@hotmail.com');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (5, 'Frau', 'Winter', 'Susanne', 'Am Waldrand 1', 'D-86077', 'Ulm', '0731/4892', 'susi.winter04@outlook.com');
INSERT INTO `faradisoDB`.`Kunden` (`idKunden`, `K_Anrede`, `K_Nachname`, `K_Vorname`, `K_Strasse`, `K_PLZ`, `K_Ort`, `K_TelNr`, `K_Email`) VALUES (8, 'Herrn', 'Zwiebel', 'Karl', 'Hügelstr. 123', 'D-89123', 'Eichingen', '07321/7456454', 'karl.onion@web.de');

COMMIT;


-- -----------------------------------------------------
-- Data for table `faradisoDB`.`PreisGruppe`
-- -----------------------------------------------------
START TRANSACTION;
USE `faradisoDB`;
INSERT INTO `faradisoDB`.`PreisGruppe` (`idPreisGruppe`, `PG_Bezeichnung`) VALUES (1, 'unteres Preisniveau');
INSERT INTO `faradisoDB`.`PreisGruppe` (`idPreisGruppe`, `PG_Bezeichnung`) VALUES (2, 'Mittelklasse');
INSERT INTO `faradisoDB`.`PreisGruppe` (`idPreisGruppe`, `PG_Bezeichnung`) VALUES (3, 'gehobene Mittelklasse');
INSERT INTO `faradisoDB`.`PreisGruppe` (`idPreisGruppe`, `PG_Bezeichnung`) VALUES (4, 'Premium');
INSERT INTO `faradisoDB`.`PreisGruppe` (`idPreisGruppe`, `PG_Bezeichnung`) VALUES (5, 'DeLuxe');

COMMIT;


-- -----------------------------------------------------
-- Data for table `faradisoDB`.`Fahrraeder`
-- -----------------------------------------------------
START TRANSACTION;
USE `faradisoDB`;
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (5, 'Mercier', 'Excalibur', 'Rennrad', 56, 3750, '27.04.2016', '08.01.2020', 'DI2', 'X-AEH-12ccWUIWJ-34', 4);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (15, 'Technobike', 'Supertandem', 'Tourenrad', 54, 3200, '28.12.2016', '03.06.2020', 'Radtaschen', 'X-AEY-11nnZUTRLK-22', 3);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (17, 'Staiger', 'Supertandem', 'Tourenrad', 54, 2950, '14.01.2016', '19.06.2020', NULL, 'X-AEY-44nnZUTRKL-90', 3);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (13, 'Systemo', 'Hurrican', 'Moutain-Bike', 52, 2665, '30.07.2016', '12.04.2019', 'SPD-Pedale', 'Z-BRHJUIKll-o12', 3);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (4, 'Miyata', 'Devant', 'Tourenrad', 58, 2585, '17.03.2018', '29.11.2020', 'Luftpumpe', 'V-klIOWERTFDS-MM', 3);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (23, 'Hercules', 'Davos', 'Tourenrad', 60, 890, '18.08.2020', '08.09.2021', NULL, 'C-907ZZTOIP-s7', 1);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (24, 'Peugeot', 'Stralis', 'Tourenrad', 54, 1270, '18.08.2020', '01.01.2021', 'Bremsen', 'G-POTZURJ-44', 1);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (7, 'Hercules', 'GoClimb', 'Mountain-Bike', 52, 850, '26.04.2019', '08.01.2020', 'Fahrradkette', 'XC-3457778K-L', 1);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (26, 'Yamaha', 'Sutra', 'Rennrad', 60, 4560, '18.08.2020', '01.01.2021', 'Alufelgen', 'CX-OOUITRRE-Q23', 5);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (8, 'Panasonic', 'EasyRide', 'Tourenrad', 58, 960, '26.04.2019', '08.05.2019', 'Sattel', 'V-OITZRRE-998', 1);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (18, 'Hirsch', 'Schneller Hirsch', 'Rennrad', 52, 2100, '13.01.2019', '19.06.2019', 'Bremsen', 'G-LLKJUIZTcc56-9', 3);
INSERT INTO `faradisoDB`.`Fahrraeder` (`idFahrraeder`, `F_Hersteller`, `F_Bezeichnung`, `F_Art`, `Rahmengroesse`, `F_AnschaffungsPreis`, `F_AnschaffungsDatum`, `F_LetzteWartung`, `F_Sonderzubehoer`, `F_FahrgestellNr`, `F_FSidPreisGruppe`) VALUES (20, 'Panasonic', 'FirstClass', 'Tourenrad', 56, 1325, '05.10.2008', '10.23.2019', 'Luftpumpe', 'HJ-KKLORETNxx-33', 2);

COMMIT;

