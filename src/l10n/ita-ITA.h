////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h deu-DEU.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <deu-DEU.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Traduzione in Italiano"
#define STRING_LOCALIZATION_AUTHOR   "Tradotto in Italiano da Tullio Facchinetti."

// Parser
#define STRING_PARSER_ALIAS_NEST     "Nested alias limit of {1} reached."
#define STRING_PARSER_OVERRIDE_RC    "Modifica configurazione rc.{1}:{2}"
#define STRING_PARSER_UNKNOWN_ATTMOD "Errore: modificatore di attributo non riconosciuto '{1}'."
#define STRING_PARSER_ALTERNATE_RC   "Uso del file .taskrc alternativo {1}"
#define STRING_PARSER_ALTERNATE_DATA "Uso di data.location alternativa {1}"
#define STRING_PARSER_UNEXPECTED_ARG "The '{1}' command does not allow '{2}'."

// Color
#define STRING_COLOR_UNRECOGNIZED    "Il colore '{1}' non è riconosciuto."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nome di colonna '{1}' non riconosciuto."
#define STRING_COLUMN_BAD_FORMAT     "Formato di colonna '{1}.{2}' non riconosciuto"
#define STRING_COLUMN_LABEL_TASKS    "Task"
#define STRING_COLUMN_LABEL_DEP      "Dipendenze"
#define STRING_COLUMN_LABEL_DEP_S    "Dip"
#define STRING_COLUMN_LABEL_DESC     "Descrizione"
#define STRING_COLUMN_LABEL_DUE      "Scadenza"
#define STRING_COLUMN_LABEL_END      "Fine"
#define STRING_COLUMN_LABEL_ENTERED  "Inserito"
#define STRING_COLUMN_LABEL_COUNT    "Conteggio"
#define STRING_COLUMN_LABEL_COMPLETE "Completato"
#define STRING_COLUMN_LABEL_MOD      "Modificato"
#define STRING_COLUMN_LABEL_ADDED    "Aggiunto"
#define STRING_COLUMN_LABEL_AGE      "Età"
#define STRING_COLUMN_LABEL_ID       "ID"
#define STRING_COLUMN_LABEL_PROJECT  "Progetto"
#define STRING_COLUMN_LABEL_UNTIL    "Fino a"
#define STRING_COLUMN_LABEL_WAIT     "Attesa"
#define STRING_COLUMN_LABEL_WAITING  "Attesa fino"
#define STRING_COLUMN_LABEL_RECUR    "Period"
#define STRING_COLUMN_LABEL_RECUR_L  "Periodico"
#define STRING_COLUMN_LABEL_START    "Inizio"
#define STRING_COLUMN_LABEL_STARTED  "Iniziati"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Stato"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Da fare"
#define STRING_COLUMN_LABEL_STAT_CO  "Completati"
#define STRING_COLUMN_LABEL_STAT_DE  "Cancellati"
#define STRING_COLUMN_LABEL_STAT_WA  "In attesa"
#define STRING_COLUMN_LABEL_STAT_RE  "Periodicamente"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "D"
#define STRING_COLUMN_LABEL_STAT_W   "W"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Tags"
#define STRING_COLUMN_LABEL_TAG      "Tag"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urgenza"
#define STRING_COLUMN_LABEL_NAME     "Nome"
#define STRING_COLUMN_LABEL_VALUE    "Valore"
#define STRING_COLUMN_LABEL_DATE     "Data"
#define STRING_COLUMN_LABEL_COLUMN   "Colonna"
#define STRING_COLUMN_LABEL_STYLES   "Formati Supportati"
#define STRING_COLUMN_LABEL_EXAMPLES "Esempio"
#define STRING_COLUMN_LABEL_SCHED    "Fissato"
#define STRING_COLUMN_LABEL_UDA      "Nome"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Etichetta"
#define STRING_COLUMN_LABEL_DEFAULT  "Predefinito"
#define STRING_COLUMN_LABEL_VALUES   "Valori consentiti"
#define STRING_COLUMN_LABEL_UDACOUNT "Conteggio Uso"
#define STRING_COLUMN_LABEL_ORPHAN   "UDA Orfano"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "casa @faccende next"
#define STRING_COLUMN_EXAMPLES_PROJ  "casa.giardino"
#define STRING_COLUMN_EXAMPLES_PAR   "casa"
#define STRING_COLUMN_EXAMPLES_IND   "  casa.giardino"
#define STRING_COLUMN_EXAMPLES_DESC  "Spostare i vestiti sul gancio più basso"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Immediatamente prima di pranzo"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se si sta giocando la partita questo pomeriggio"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Prima di scrivere la lettera a casa"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se non si va a tagliare i capelli"

// commands/Cmd*
#define STRING_CMD_CONFLICT          "Report personalizzato '{1}' provoca conflitto con un comando standard."
#define STRING_CMD_VERSION_USAGE     "Mostra il numero di versione di taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Mostra solo il numero di versione di taskwarrior"
#define STRING_CMD_VERSION_MIT       "Taskwarrior può essere copiato solo nei termini della licenza MIT, reperibile nei sorgenti di taskwarrior."
#define STRING_CMD_VERSION_DOCS      "La documentazione di taskwarrior è consultabile con 'man task', 'man taskrc', 'man task-color', 'man task-sync' o presso http://taskwarrior.org"
#define STRING_CMD_VERSION_BUILT     "{1} {2} generato per "
#define STRING_CMD_VERSION_UNKNOWN   "sconosciuto"
#define STRING_CMD_VERSION_COPY      "Copyright (C) 2006 - 2018 P. Beckingham, F. Hernandez."
#define STRING_CMD_LOGO_USAGE        "Mostra il logo di Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "Il comando logo richiede l'abilitazione del supporto ai colori."
#define STRING_CMD_EXEC_USAGE        "Esegue comandi e script esterni"
#define STRING_CMD_URGENCY_USAGE     "Mostra l'urgenza di un task"
#define STRING_CMD_URGENCY_RESULT    "task {1} urgenza {2}"
#define STRING_CMD_ADD_USAGE         "Aggiunge un nuovo task"
#define STRING_CMD_ADD_FEEDBACK      "Task {1} creato."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Aggiunge un nuovo task già completato"
#define STRING_CMD_LOG_NO_RECUR      "Task periodici non possono essere registrati."
#define STRING_CMD_LOG_NO_WAITING    "Task in attesa non possono essere registrati."

//#define STRING_CMD_LOG_LOGGED        "Task registrato."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Mostra gli ID dei task corrispondenti, come intervallo"
#define STRING_CMD_IDS_USAGE_LIST    "Mostra gli ID dei task corrispondenti, in forma di lista"
#define STRING_CMD_IDS_USAGE_ZSH     "Mostra gli ID e le descrizioni dei task corrispondenti"
#define STRING_CMD_UDAS_USAGE        "Mostra tutti i dettagli degli UDA definiti"
#define STRING_CMD_UDAS_COMPL_USAGE  "Mostra gli UDA definiti per il completamento"
#define STRING_CMD_UUIDS_USAGE_RANGE "Mostra gli UUID dei task corrispondenti, come lista separata da virgole"
#define STRING_CMD_UUIDS_USAGE_LIST  "Mostra gli UUID dei task corrispondenti, come lista"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Mostra gli UUID e le descrizioni dei task corrispondenti"
#define STRING_CMD_EXPORT_USAGE      "Esporta i task in formato JSON"
#define STRING_CMD_INFO_USAGE        "Mostra tutti i dati e i metadati"
#define STRING_CMD_INFO_BLOCKED      "Questo task è bloccato da"
#define STRING_CMD_INFO_BLOCKING     "Questo task sta bloccando"
#define STRING_CMD_INFO_UNTIL        "Fino a"
#define STRING_CMD_INFO_MODIFICATION "Modifica"
#define STRING_CMD_INFO_MODIFIED     "Ultima modifica"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Ritorna alla più recente modifica di un task"
#define STRING_CMD_STATS_USAGE       "Mostra le statistiche sul task"
#define STRING_CMD_STATS_CATEGORY    "Categoria"
#define STRING_CMD_STATS_DATA        "Dati"
#define STRING_CMD_STATS_TOTAL       "Totale"
#define STRING_CMD_STATS_ANNOTATIONS "Annotazioni"
#define STRING_CMD_STATS_UNIQUE_TAGS "Tag univoci"
#define STRING_CMD_STATS_PROJECTS    "Progetti"
#define STRING_CMD_STATS_DATA_SIZE   "Dimensione dati"
#define STRING_CMD_STATS_UNDO_TXNS   "Transazioni di undo"
#define STRING_CMD_STATS_BACKLOG     "Sincronizza le transazioni di backlog"
#define STRING_CMD_STATS_TAGGED      "Task taggati"
#define STRING_CMD_STATS_OLDEST      "Task più vecchio"
#define STRING_CMD_STATS_NEWEST      "Task più recente"
#define STRING_CMD_STATS_USED_FOR    "Task usati per"
#define STRING_CMD_STATS_ADD_EVERY   "Task aggiunti ogni"
#define STRING_CMD_STATS_COMP_EVERY  "Task completati ogni"
#define STRING_CMD_STATS_DEL_EVERY   "Task cancellati ogni"
#define STRING_CMD_STATS_AVG_PEND    "Tempo medio di attesa"
#define STRING_CMD_STATS_DESC_LEN    "Lunghezza media delle descrizioni"
#define STRING_CMD_STATS_CHARS       "{1} caratteri"
#define STRING_CMD_STATS_BLOCKED     "Task bloccati"
#define STRING_CMD_STATS_BLOCKING    "Task bloccanti"
#define STRING_CMD_REPORTS_USAGE     "Lista dei report supportati"
#define STRING_CMD_REPORTS_REPORT    "Report"
#define STRING_CMD_REPORTS_DESC      "Descrizione"
#define STRING_CMD_REPORTS_SUMMARY   "{1} report"
#define STRING_CMD_TAGS_USAGE        "Mostra la lista di tutti i tag utilizzati"
#define STRING_CMD_COMTAGS_USAGE     "Mostra solo una lista dei tag utilizzati, per autocompletamento"
#define STRING_CMD_TAGS_SINGLE       "1 tag"
#define STRING_CMD_TAGS_PLURAL       "{1} tag"
#define STRING_CMD_TAGS_NO_TAGS      "Nessun tag."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Mostra un report dello storico dei task, per mese"
#define STRING_CMD_HISTORY_YEAR      "Anno"
#define STRING_CMD_HISTORY_MONTH     "Mese"
#define STRING_CMD_HISTORY_ADDED     "Aggiunto"
#define STRING_CMD_HISTORY_COMP      "Completato"
#define STRING_CMD_HISTORY_DEL       "Cancellato"
#define STRING_CMD_HISTORY_NET       "Bilancio"
#define STRING_CMD_HISTORY_USAGE_A   "Mostra un report dello storico dei task, per anno"
#define STRING_CMD_HISTORY_AVERAGE   "Media"
#define STRING_CMD_HISTORY_LEGEND    "Legenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legenda: + aggiunto, X completato, - cancellato"
#define STRING_CMD_GHISTORY_USAGE_M  "Mostra un report grafico dello storico dei task, per mese"
#define STRING_CMD_GHISTORY_USAGE_A  "Mostra un report grafico dello storico dei task, per anno"
#define STRING_CMD_GHISTORY_YEAR     "Anno"
#define STRING_CMD_GHISTORY_MONTH    "Mese"
#define STRING_CMD_GHISTORY_NUMBER   "Aggiunti/Completati/Cancellati"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Contrassegna il task specificato come completato"
#define STRING_CMD_DONE_CONFIRM      "Completare il task {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Task completato {1} '{2}'."
#define STRING_CMD_DONE_NO           "Task non completato."
#define STRING_CMD_DONE_NOTPEND      "Il task {1} '{2}' non è ne' pendente ne' in attesa."
#define STRING_CMD_DONE_1            "Completato {1} task."
#define STRING_CMD_DONE_N            "Completati {1} task."

#define STRING_CMD_PROJECTS_USAGE    "Mostra tutti i nomi di progetto utilizzati"
#define STRING_CMD_PROJECTS_USAGE_2  "Mostra solo i nomi di progetto utilizzati"
#define STRING_CMD_PROJECTS_NO       "Nessun progetto."
#define STRING_CMD_PROJECTS_NONE     "(nessuno)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} progetto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} progetti"
#define STRING_CMD_PROJECTS_TASK     "({1} task)"
#define STRING_CMD_PROJECTS_TASKS    "({1} task)"
#define STRING_CMD_SUMMARY_USAGE     "Mostra un report dello stato dei task per progetto"
#define STRING_CMD_SUMMARY_PROJECT   "Progetto"
#define STRING_CMD_SUMMARY_REMAINING "Rimanenti"
#define STRING_CMD_SUMMARY_AVG_AGE   "Età media"
#define STRING_CMD_SUMMARY_COMPLETE  "Completi"
#define STRING_CMD_SUMMARY_NONE      "(nessuno)"
#define STRING_CMD_COUNT_USAGE       "Conteggia task corrispondenti"
#define STRING_CMD_GET_USAGE         "DOM Accessor"
#define STRING_CMD_GET_NO_DOM        "No DOM reference specified."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Nessun UDA definito."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA definito"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDAs defined"
#define STRING_CMD_UDAS_ORPHAN       "{1} UDA orfano"
#define STRING_CMD_UDAS_ORPHANS      "{1} UDA orfani"

#define STRING_CMD_DELETE_USAGE      "Cancella il task specificato"
#define STRING_CMD_DELETE_CONFIRM    "Cancellare permanentemente il task {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Cancellazione del task {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Cancellazione del task periodico {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Questo è un task periodico. Cancellare tutti i task pendenti associati a queso task?"
#define STRING_CMD_DELETE_NO         "Task non cancellato."
#define STRING_CMD_DELETE_NOT_DEL    "Il task {1} '{2}' non può essere elminato."
#define STRING_CMD_DELETE_1          "Task {1} cancellato."
#define STRING_CMD_DELETE_N          "Task {1} cancellati."

#define STRING_CMD_DUPLICATE_USAGE   "Duplica il task specificato"
#define STRING_CMD_DUPLICATE_REC     "Nota: il task {1} genera task periodici.  Il task duplicato anche."
#define STRING_CMD_DUPLICATE_NON_REC "Nota: il task {1} era un task periodico.  Il task duplicato non lo è."
#define STRING_CMD_DUPLICATE_CONFIRM "Duplicare il task {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Duplicated task {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Task non duplicato"
#define STRING_CMD_DUPLICATE_1       "Task {1} duplicato."
#define STRING_CMD_DUPLICATE_N       "Task {1} duplicati."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Contrassegna i task specificati come avviati"
#define STRING_CMD_START_NO          "Task non avviato."
#define STRING_CMD_START_ALREADY     "Task {1} '{2}' già avviati."
#define STRING_CMD_START_TASK        "Avvio task {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Avviare task {1} '{2}'?"
#define STRING_CMD_START_1           "Task {1} avviato."
#define STRING_CMD_START_N           "Task {1} avviati."

#define STRING_CMD_STOP_USAGE        "Rimuove il tempo di 'avvio' dal task"
#define STRING_CMD_STOP_NO           "Task non fermato."
#define STRING_CMD_STOP_ALREADY      "Task {1} '{2}' non fermato."
#define STRING_CMD_STOP_TASK         "Sto fermando il task {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Fermare task {1} '{2}'?"
#define STRING_CMD_STOP_1            "Task {1} fermato."
#define STRING_CMD_STOP_N            "Task {1} fermati."

#define STRING_CMD_APPEND_USAGE      "Aggiunge testo alla fine di una descrizione di un task esistente"
#define STRING_CMD_APPEND_1          "Aggiunta al task {1}."
#define STRING_CMD_APPEND_N          "Aggiunte ai task {1}."
#define STRING_CMD_APPEND_TASK       "Aggiunta al task {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Questo è un task periodico. Aggiungere il testo alla fine della descrizione di tutti i task associati?"
#define STRING_CMD_APPEND_CONFIRM    "Aggiungere alla fine della descrizione del task {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Aggiunta non effettuata."

#define STRING_CMD_PREPEND_USAGE     "Aggiunge testo all'inizio di una descrizione di un task esistente"
#define STRING_CMD_PREPEND_1         "Aggiunta al task {1}."
#define STRING_CMD_PREPEND_N         "Aggiunte ai task {1}."
#define STRING_CMD_PREPEND_TASK      "Aggiunta al task {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Questo è un task periodico. Aggiungere il testo all'inizio della descrizione di tutti i task associati?"
#define STRING_CMD_PREPEND_CONFIRM   "Aggiungere all'inizio della descrizione del task {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Aggiunta non effettuata."

#define STRING_CMD_ANNO_USAGE        "Aggiunge una annotazione a un task esistente"
#define STRING_CMD_ANNO_CONFIRM      "Aggiungere una annotazione al task {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Aggiunta al task {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Questo è un task periodico. Aggiungere una annotazione a tutti i task associati?"
#define STRING_CMD_ANNO_NO           "Aggiunta non effettuata."
#define STRING_CMD_ANNO_1            "Aggiunta al task {1}."
#define STRING_CMD_ANNO_N            "Aggiunte ai task {1}."

#define STRING_CMD_COLUMNS_USAGE     "Tutte le colonne e gli stili di formattazione"
#define STRING_CMD_COLUMNS_NOTE      "* significa formato di default, quindi opzionale. Per esempio, 'due' e 'due.formatted' sono equivalenti."
#define STRING_CMD_COLUMNS_USAGE2    "Mostra solo una lista delle colonne supportate"
#define STRING_CMD_COLUMNS_ARGS      "Può essere specificata solo una stringa di ricerca."

#define STRING_CMD_DENO_USAGE        "Cancella una annotazione"
#define STRING_CMD_DENO_NONE         "Il task specificato non ha annotazioni che possano essere cancellate."
#define STRING_CMD_DENO_CONFIRM      "Denotare il task {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Annotazione '{1}' trovata e cancellata."
#define STRING_CMD_DENO_NOMATCH      "Nessuna annotazione da cancellare trovata per '{1}'."
#define STRING_CMD_DENO_NO           "Annotazione non rimossa."
#define STRING_CMD_DENO_1            "Annotazione rimossa da task {1}."
#define STRING_CMD_DENO_N            "Annotazioni rimosse da task {1}."

#define STRING_CMD_IMPORT_USAGE      "Importa file JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Importati {1} task."
#define STRING_CMD_IMPORT_FILE       "Importazione di '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Annotazione senza descrizione: {1}"
#define STRING_TASK_NO_ENTRY         "Annotazione senza data di immissione: {1}"
#define STRING_CMD_SYNC_USAGE        "Sincronizza i dati con il Taskserver"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver non configurato."
#define STRING_CMD_SYNC_BAD_CRED     "Credenziali del Taskserver malformate."
#define STRING_CMD_SYNC_BAD_CERT     "Taskserver certificate missing."
#define STRING_CMD_SYNC_BAD_KEY      "Taskserver key missing."
#define STRING_CMD_SYNC_ADD          "   aggiunto {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modificato {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Sincronizzazione con {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sincronizzazione effettuata."
#define STRING_CMD_SYNC_SUCCESS1     "Sincronizzazione effettuata.  {1} modifiche caricate."
#define STRING_CMD_SYNC_SUCCESS2     "Sincronizzazione effettuata.  {1} modifiche scaricate."
#define STRING_CMD_SYNC_SUCCESS3     "Sincronizzazione effettuata.  {1} modifiche caricate, {2} modifiche scaricate."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sincronizzazione effettuata.  Nessuna modifica."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Sincronizzazione fallita.  Credenziali non corrette o Taskserver non abilitato."
#define STRING_CMD_SYNC_FAIL_ERROR   "Sincronizzazione fallita.  Il Taskserver ha ritornato l'errore: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Sincronizzazione fallita.  Impossibile connettersi al Taskserver."
#define STRING_CMD_SYNC_BAD_SERVER   "Sincronizzazione fallita.  Impostazione di configurazione '{1}' malformata"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior was built without GnuTLS support.  Sync is not available."
#define STRING_CMD_SYNC_INIT         "Please confirm that you wish to upload all your tasks to the Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior will not proceed with first-time sync initialization."
#define STRING_CMD_SYNC_RELOCATE0    "The server account has been relocated.  Please update your configuration using:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "CA certificate not found."
#define STRING_CMD_SYNC_TRUST_CA     "You should either provide a CA certificate or override verification, but not both."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Dettagli su piattaforma, build e ambiente"
#define STRING_CMD_DIAG_PLATFORM     "Piattaforma"
#define STRING_CMD_DIAG_COMPILER     "Compilatore"
#define STRING_CMD_DIAG_VERSION      "Versione"
#define STRING_CMD_DIAG_CAPS         "Caps"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Caratteristiche della Build"
#define STRING_CMD_DIAG_BUILT        "Generato"
#define STRING_CMD_DIAG_COMMIT       "Commit"
#define STRING_CMD_DIAG_FOUND        "(trovato)"
#define STRING_CMD_DIAG_MISSING      "(mancante)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Abilitato"
#define STRING_CMD_DIAG_DISABLED     "Disabilitato"
#define STRING_CMD_DIAG_CONFIG       "Configurazione"
#define STRING_CMD_DIAG_TESTS        "Test"
#define STRING_CMD_DIAG_UUID_SCAN    "Valutati {1} task per duplicazione UUID:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Trovato duplicato {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "Nessun duplicato trovato"
#define STRING_CMD_DIAG_NONE         "-nessuno-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Genera la lista di tutti i comandi, per autocompletamento"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Genera la lista di tutti i comandi, per autocompletamento in zsh"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Genera la lista di tutti gli alias, per autocompletamento"

#define STRING_CMD_MODIFY_USAGE1     "Modifica il task esistente usando gli argomenti specificati."
#define STRING_CMD_MODIFY_NO_DUE     "Impossibile specificare un task periodico senza una data di scadenza."
#define STRING_CMD_MODIFY_REM_DUE    "Impossibile eliminare una scadenza da un task periodico"
#define STRING_CMD_MODIFY_REC_ALWAYS "Impossibile rimuovere un evento da un task periodico."
#define STRING_CMD_MODIFY_TASK       "Modifica del task {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Modifica del task periodico {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Task {1} modificato."
#define STRING_CMD_MODIFY_N          "Task {1} modificati."
#define STRING_CMD_MODIFY_NO         "Task non modificato."
#define STRING_CMD_MODIFY_CONFIRM    "Modificare il task {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "Questo è un task periodico. Modificare tutti i task associati?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Testo aggiunti da specificare."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "Tutti i colori, un esempio, o una legenda"
#define STRING_CMD_COLOR_HERE        "Coloti in uso:"
#define STRING_CMD_COLOR_COLOR       "Colore"
#define STRING_CMD_COLOR_DEFINITION  "Definizione"
#define STRING_CMD_COLOR_EXPLANATION "Usare questo comando per vedere come i colori sono visualizzati sul terminale in uso."
#define STRING_CMD_COLOR_16          "16-colori in uso (supporto per sottolineatura, grassetto, e sfondo):"
#define STRING_CMD_COLOR_256         "256-colori in uso (supporto per sottolineatura):"
#define STRING_CMD_COLOR_YOURS       "Esempio:"
#define STRING_CMD_COLOR_BASIC       "Colori base"
#define STRING_CMD_COLOR_EFFECTS     "Effetti"
#define STRING_CMD_COLOR_CUBE        "Cubo dei colori RGB"
#define STRING_CMD_COLOR_RAMP        "Rampa dei grigi"
#define STRING_CMD_COLOR_TRY         "Provare eseguendo '{1}'."
#define STRING_CMD_COLOR_OFF         "Il colore è attualmente disabilitato nel file .taskrc. Per abilitarlo, rimuovi la linea 'color=off', o cambia 'off' in 'on'."
#define STRING_CMD_CONFIG_USAGE      "Modifica le impostazioni nella configurazione dei task"
#define STRING_CMD_CONFIG_CONFIRM    "Sei sicuro di voler cambiare il valore di '{1}' da '{2}' a '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Sei sicuro di voler aggiungere '{1}' con valore '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Sei sicuro di voler rimuovere '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Nessuna voce '{1}' trovata."
#define STRING_CMD_CONFIG_FILE_MOD   "File di configurazione {1} modificato."
#define STRING_CMD_CONFIG_NO_CHANGE  "Nessuna modifica apportata."
#define STRING_CMD_CONFIG_NO_NAME    "Specificare il nome di una variabile di configurazione da modificare."
#define STRING_CMD_HCONFIG_USAGE     "Elenca le variabili di configurazione supportate, per autocompletamento"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "Differente numero di colonne ed etichette per il report '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} mostrato"
#define STRING_CMD_CUSTOM_COUNT      "1 task"
#define STRING_CMD_CUSTOM_COUNTN     "{1} task"
#define STRING_CMD_CUSTOM_TRUNCATED  "troncato alla linea {1}"
#define STRING_CMD_TIMESHEET_USAGE   "Sommario settimanale dei task completati e avviati"
#define STRING_CMD_TIMESHEET_STARTED "Avviati ({1} task)"
#define STRING_CMD_TIMESHEET_DONE    "Completati ({1} task)"
#define STRING_CMD_BURN_USAGE_M      "Mostra un grafico del lavoro da svolgere, per mese"
#define STRING_CMD_BURN_USAGE_W      "Mostra un grafico del lavoro da svolgere, per settimana"
#define STRING_CMD_BURN_USAGE_D      "Mostra un grafico del lavoro da svolgere, per giorno"
#define STRING_CMD_BURN_TITLE        "Lavoro da svolgere"
#define STRING_CMD_BURN_TOO_SMALL    "Finestra troppo piccola per mostrare il grafico."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Giornaliero"
#define STRING_CMD_BURN_WEEKLY       "Settimanale"
#define STRING_CMD_BURN_MONTHLY      "Mensile"
#define STRING_CMD_BURN_STARTED      "Avviato"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Chiuso"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Da fare"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "No convergenza"
#define STRING_CMD_CAL_USAGE         "Mostra un calendario, con i task da svolgere marcati"
#define STRING_CMD_CAL_BAD_MONTH     "L'argomento '{1}' non è un mese valido."
#define STRING_CMD_CAL_BAD_ARG       "Impossibile riconosce l'argomento '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Data"
#define STRING_CMD_CAL_LABEL_HOL     "Festività"
#define STRING_CMD_CAL_SUN_MON       "La variabile di configurazione 'weekstart' può solo contenere i valori 'Domenica' or 'Lunedì'."
#define STRING_CMD_EDIT_USAGE        "Esegue un editor per la modifica diretta di un task"
#define STRING_CMD_CALC_USAGE        "Calculator"

// Config
#define STRING_CONFIG_OVERNEST       "File di configurazione annidato più di 10 livelli - deve trattarsi di un errore."
#define STRING_CONFIG_READ_INCLUDE   "Impossibile leggere il file di inclusione '{1}'."
#define STRING_CONFIG_INCLUDE_PATH   "E` possibile includere solo file con percorso assoluto, non '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Voce malformata '{1}' nel file di configurazione."
#define STRING_CONFIG_DEPRECATED_COL "Il file .taskrc contiene report con nomi di colonna deprecati. Verificare entry_time, start_time o end_time in:"
#define STRING_CONFIG_DEPRECATED_VAR "Il file .taskrc contiene variabili deprecate:"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' non è una data valida nel formato '{2}'."
#define STRING_DATE_BAD_WEEKSTART    "La variabile di configurazione 'weekstart' può solo contenere 'Domenica' o 'Lunedì'."

#define STRING_DATE_JANUARY          "gennaio"
#define STRING_DATE_FEBRUARY         "febbraio"
#define STRING_DATE_MARCH            "marzo"
#define STRING_DATE_APRIL            "aprile"
#define STRING_DATE_MAY              "maggio"
#define STRING_DATE_JUNE             "giugno"
#define STRING_DATE_JULY             "luglio"
#define STRING_DATE_AUGUST           "agosto"
#define STRING_DATE_SEPTEMBER        "settembre"
#define STRING_DATE_OCTOBER          "ottobre"
#define STRING_DATE_NOVEMBER         "novembre"
#define STRING_DATE_DECEMBER         "decembre"

#define STRING_DATE_MONDAY           "lunedì"
#define STRING_DATE_TUESDAY          "martedì"
#define STRING_DATE_WEDNESDAY        "mercoledì"
#define STRING_DATE_THURSDAY         "giovedì"
#define STRING_DATE_FRIDAY           "venerdì"
#define STRING_DATE_SATURDAY         "sabato"

// dependency
#define STRING_DEPEND_BLOCKED        "Il task {1} è bloccato da:"
#define STRING_DEPEND_BLOCKING       "e sta bloccando:"
#define STRING_DEPEND_FIX_CHAIN      "Si desidera riparare la catena delle dipendenze?"

// DOM
#define STRING_DOM_UNREC             "DOM: Impossibile ottenere il nome non riconosciuto '{1}'."

// Eval
#define STRING_EVAL_NO_EXPRESSION    "No expression to evaluate."
#define STRING_EVAL_UNSUPPORTED      "Operatore non supportato '{1}'."
#define STRING_EVAL_OP_EXPECTED      "Operator expected."
#define STRING_EVAL_NO_EVAL          "The expression could not be evaluated."
#define STRING_EVAL_NOT_EXPRESSION   "The value is not an expression."
#define STRING_PAREN_MISMATCH        "Mismatched parentheses in expression"

// edit
#define STRING_EDIT_NO_CHANGES       "Nessuna modifica riscontrata."
#define STRING_EDIT_FAILED           "Editing failed with exit code {1}."
#define STRING_EDIT_COMPLETE         "Modifica completa."
#define STRING_EDIT_IN_PROGRESS      "Task is already being edited."
#define STRING_EDIT_LAUNCHING        "Esecuzione di  '{1}' ora..."
#define STRING_EDIT_CHANGES          "Modifiche rilevate."
#define STRING_EDIT_UNPARSEABLE      "Taskwarrior non può gestire le modifiche. Provare di nuovo?"
#define STRING_EDIT_UNWRITABLE       "La directory data.location non è scrivibile."
#define STRING_EDIT_TAG_SEP          "Separare i tag con spazi; es.: tag1 tag2"
#define STRING_EDIT_DEP_SEP          "Le dipendenze dovrebbero consistere in una lista separata da virgole di ID/UUID o intervalli di ID, senza spazi."
#define STRING_EDIT_UDA_SEP          "User Defined Attribute"
#define STRING_EDIT_UDA_ORPHAN_SEP   "User Defined Attribute orfani"
#define STRING_EDIT_END              "Fine"

#define STRING_EDIT_PROJECT_MOD      "Progetto modificato."
#define STRING_EDIT_PROJECT_DEL      "Progetto cancellato."
#define STRING_EDIT_DESC_MOD         "Descrizione modificata."
#define STRING_EDIT_DESC_REMOVE_ERR  "Impossibile rimuovere la descrizione."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Impossibile rimuovere la data di creazione."
#define STRING_EDIT_ENTRY_MOD        "Data di creazione modificata."
#define STRING_EDIT_START_MOD        "Data di inizio modificata."
#define STRING_EDIT_START_DEL        "Data di inizio rimossa."
#define STRING_EDIT_END_MOD          "Data di fine modificata."
#define STRING_EDIT_END_DEL          "Data di fine rimossa."
#define STRING_EDIT_END_SET_ERR      "Impossibile impostare la data di chiusura del task pendente."
#define STRING_EDIT_SCHED_MOD        "Data di schedulazione modificata."
#define STRING_EDIT_SCHED_DEL        "Data di schedulazione rimossa."
#define STRING_EDIT_DUE_MOD          "Scadenza modificata."
#define STRING_EDIT_DUE_DEL          "Scadenza rimossa."
#define STRING_EDIT_DUE_DEL_ERR      "Impossibile rimuovere la data di scadenza di un task periodico."
#define STRING_EDIT_UNTIL_MOD        "Data 'Fino a' modificata."
#define STRING_EDIT_UNTIL_DEL        "Data 'Fino a' rimossa."
#define STRING_EDIT_RECUR_MOD        "Ricorrenza periodica modificata."
#define STRING_EDIT_RECUR_DEL        "Ricorrenza periodica rimossa."
#define STRING_EDIT_RECUR_DUE_ERR    "Un task periodico deve avere una data di scadenza."
#define STRING_EDIT_RECUR_ERR        "Durata del task periodico non valida."
#define STRING_EDIT_WAIT_MOD         "Data di attesa modificata."
#define STRING_EDIT_WAIT_DEL         "Data di attesa rimossa."
#define STRING_EDIT_PARENT_MOD       "UUID genitore modificato."
#define STRING_EDIT_PARENT_DEL       "UUID genitore rimosso."
#define STRING_EDIT_UDA_MOD          "UDA {1} modificato."
#define STRING_EDIT_UDA_DEL          "UDA {1} cancellato."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "Il comando 'task <id> edit' permette di modificare ogni aspetto di un task"
#define STRING_EDIT_HEADER_2         "utilizzando un editor di testo. Segue la rappresentazione dei dettagli di un task."
#define STRING_EDIT_HEADER_3         "Modificare quanto desiderato, e quando si salva e si esce dall'editor,"
#define STRING_EDIT_HEADER_4         "taskwarrior leggerà il file, determinando ciò che è cambiato, e applicherà"
#define STRING_EDIT_HEADER_5         "le modifiche. Se si esce dall'editor senza salvare o effettuare"
#define STRING_EDIT_HEADER_6         "modifiche, taskwarrior non farà alcunché."

#define STRING_EDIT_HEADER_7         "Le linee che iniziano con # rappresentano dati che non possono essere modificati, come l'ID."
#define STRING_EDIT_HEADER_8         "Se si è troppo creativi con le modifiche, taskwarrior aprirà"
#define STRING_EDIT_HEADER_9         "nuovamente l'editor per un secondo tentativo."

#define STRING_EDIT_HEADER_10        "Se ci si trova in un ciclo senza fine, continuando a editare lo stesso file,"
#define STRING_EDIT_HEADER_11        "si chiuda semplicemente l'editor senza effettuare modifiche. Taskwarrior"
#define STRING_EDIT_HEADER_12        "se ne accorgerà e terminerà l'editing."

#define STRING_EDIT_HEADER_13        "Le annotazioni sono del tipo: <date> -- <text> e possono essere in numero arbitrario."
#define STRING_EDIT_HEADER_14        "Il separatore ' -- ' tra la data e il campo di teso non dovrebbe essere rimosso."
#define STRING_EDIT_HEADER_15        "Una linea preimpostata per aggiungere una annotazione è stata aggiunta per comodità."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Nome               Dati modificabili"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "Errore: "
#define STRING_TRIVIAL_INPUT         "Specificare un comando o un task da modificare"
#define STRING_INFINITE_LOOP         "Sostituzione terminata poiché più di {1} modifiche sono state fatte - protezione da ciclo infinito"
#define STRING_UDA_TYPE              "Gli User defined attribute possono solo essere di tipo 'string', 'date', 'duration' o 'numeric'."
#define STRING_UDA_COLLISION         "L'UDA '{1}' ha lo stesso nome di un attributo di sistema, e ciò non è permesso."
#define STRING_INVALID_MOD           "L'attributo '{1}' non ammette un valore pari a '{2}'."
#define STRING_ERROR_DETAILS         "The setting 'calendar.details.report' must contain a single report name."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."
#define STRING_ERROR_CONFIRM_SIGINT  "Interrupted: No changes made."
#define STRING_ERROR_BAD_STATUS      "The status '{1}' is not valid."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nessun task."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nessun task specificat."
#define STRING_FEEDBACK_NO_MATCH     "Nessuna corrispondenza."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 task)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} task)"
#define STRING_FEEDBACK_DELETED      "{1} sarà cancellato."
#define STRING_FEEDBACK_DEP_SET      "Le dipendenze saranno impostate a '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Le dipendenze saranno modificate da '{1}' in '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dipendenze '{1}' cancellate."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dipendenze impostate a '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dipendenze cambiate da '{1}' a '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} sarà impostata a '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} sarà modificata da '{2}' a '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} cancellato."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} cancellato (durata: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} impostata a '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} modificata da '{2}' a '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Annotazione di '{1}' aggiunta."
#define STRING_FEEDBACK_ANN_DEL      "Annotazione '{1}' cancellata."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Annotazione modificata in '{1}'."
#define STRING_FEEDBACK_NOP          "Nessuna modifica sarà apportata."
#define STRING_FEEDBACK_WAS_NOP      "Nessuna modifica apportata."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Il tag speciale 'nocolor' disabilita le regole dei colori per questo task."
#define STRING_FEEDBACK_TAG_NONAG    "Il tag speciale 'nonag' eviterà problemi quando il task è modificato."
#define STRING_FEEDBACK_TAG_NOCAL    "Il tag speciale 'nocal' manterrà il task fuori dal report 'calendar'."
#define STRING_FEEDBACK_TAG_NEXT     "Il tag speciale 'next' aumenterà l'urgenza di questo task in modo che appaia nel report 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Sbloccato {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Il task {1} '{2}' è scaduto ed è stato eliminato"
#define STRING_FEEDBACK_BACKLOG_N    "There are {1} local changes.  Sync required."
#define STRING_FEEDBACK_BACKLOG      "There is {1} local change.  Sync required."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "Il progetto '{1}' è stato modificat."
#define STRING_HELPER_PROJECT_COMPL  "Il progetto '{1}' è {2}% completo"
#define STRING_HELPER_PROJECT_REM    "({1} di {2} task rimanenti)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// Hooks
#define STRING_HOOK_ERROR_OBJECT     "Hook Error: JSON Object '{...}' expected from hook script: {1}"
#define STRING_HOOK_ERROR_NODESC     "Hook Error: JSON Object missing 'description' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_NOUUID     "Hook Error: JSON Object missing 'uuid' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_SYNTAX     "Hook Error: JSON syntax error in: {1}"
#define STRING_HOOK_ERROR_JSON       "Hook Error: JSON "
#define STRING_HOOK_ERROR_NOPARSE    "Hook Error: JSON failed to parse: "
#define STRING_HOOK_ERROR_BAD_NUM    "Hook Error: Expected {1} JSON task(s), found {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_SAME1      "Hook Error: JSON must be for the same task: {1}, in hook script: {2}"
#define STRING_HOOK_ERROR_SAME2      "Hook Error: JSON must be for the same task: {1} != {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_NOFEEDBACK "Hook Error: Expected feedback from failing hook script: {1}"

// Record
#define STRING_RECORD_EMPTY          "Voce vuota in ingresso."
#define STRING_RECORD_JUNK_AT_EOL    "Carattere non riconosciuto a fine riga."
#define STRING_RECORD_NOT_FF4        "Voce non riconosciuta come formato 4."

// 'show' command
#define STRING_CMD_SHOW              "Mostra i sottoinsiemi di variabili di configurazione"
#define STRING_CMD_SHOW_ARGS         "Solo 'all' può essere specificata come stringa di ricerca."
#define STRING_CMD_SHOW_NONE         "Variabile di configurazione non corrispondente."
#define STRING_CMD_SHOW_UNREC        "Il file .taskrc contiene variabili non riconosciute:"
#define STRING_CMD_SHOW_DIFFER       "Alcune variabili in .taskrc hanno valore diverso dal default."
#define STRING_CMD_SHOW_EMPTY        "Errore di configurazione: .taskrc è vuoto."
#define STRING_CMD_SHOW_DIFFER_COLOR "Evidenziate sopra in {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Errore di configurazione: {1} contiene un valore non riconosciuto '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Errore di configurazione: data.location non specificato in .taskrc."
#define STRING_CMD_SHOW_LOC_EXIST    "Errore di configurazione: data.location contiene una directory che non esiste o non è leggibile."
#define STRING_CMD_SHOW_CONF_VAR     "Variabile di configurazione"
#define STRING_CMD_SHOW_CONF_VALUE   "Valore"
#define STRING_CMD_SHOW_CONF_DEFAULT "Default value"
#define STRING_CMD_SHOWRAW           "Mostra le impostazioni di configurazione in formato processabile"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior non supporta più il formato di file 1, usato tra il 27 Novembre 2006 e il 31 Dicembre 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior no longer supports file format 2, originally used between 1 January 2008 and 12 April 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Formato di file non riconosciuto."
#define STRING_TASK_DEPEND_ITSELF    "Un task non può dipendere da sè stesso."
#define STRING_TASK_DEPEND_MISS_CREA "Impossibile creare la dipendenza dal task {1} - non trovato."
#define STRING_TASK_DEPEND_MISS_DEL  "Impossibile cancellare la dipendenza dal task {1} - non trovato."
#define STRING_TASK_DEPEND_DUP       "Task {1} già dipende da {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Dipendenza circolare riscontrata ed evitata."
#define STRING_TASK_VALID_DESC       "Un task deve avere una descrizione."
#define STRING_TASK_VALID_BLANK      "Impossibile aggiungere un task vuoto."
#define STRING_TASK_VALID_BEFORE     "Warning: data '{1}' con valore successivo alla data '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Un task periodico deve avere una data di scadenza."
#define STRING_TASK_VALID_RECUR      "Il valore di periodicità '{1}' non è valido."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Prevenuta l'esecuzione del comando."
#define STRING_TASK_SAFETY_ALLOW     "You did not specify a filter, and with the 'allow.empty.filter' value, no action is taken."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

// TDB2
#define STRING_TDB2_PARSE_ERROR      " in {1} alla linea {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Impossibile aggiungere il task in quanto l'uuid '{1}' non è unico."
#define STRING_TDB2_MISSING          "Mancante                       {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "Nessuna transazione memorizzata da ripristinare."
#define STRING_TDB2_LAST_MOD         "L'ultima modifica è stat effettuata {1}"
#define STRING_TDB2_UNDO_PRIOR       "Valori precedenti"
#define STRING_TDB2_UNDO_CURRENT     "Valori correnti"
#define STRING_TDB2_DIFF_PREV        "--- stato precedente"             // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "L'undo ripristinerà questo stato"   //   ||
#define STRING_TDB2_DIFF_CURR        "+++ stato corrente "             // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Modifiche effettuate {1}"
#define STRING_TDB2_UNDO_CONFIRM     "Il comando undo non è reversibile. Sicuro di voler ripristinare lo stato precedente?"
#define STRING_TDB2_MISSING_UUID     "Impossibile individuare l'UUID nel task da ripristinare."
#define STRING_TDB2_REVERTED         "Modifiche al task ripristinate."
#define STRING_TDB2_REMOVED          "Task rimosso."
#define STRING_TDB2_UNDO_COMPLETE    "Undo completato."
#define STRING_TDB2_UNDO_SYNCED      "Cannot undo change because the task was already synced.  Modify the task instead."
#define STRING_TDB2_DIRTY_EXIT       "Exiting with unwritten changes to {1}"
#define STRING_TDB2_UNWAIT           "Un-waiting task '{1}'"

// recur.cpp
#define STRING_RECUR_CREATE          "Creating recurring task instance '{1}'"

// View
#define STRING_VIEW_TOO_SMALL        "Il report ha larghezza minima di {1} e non entra nella larghezza disponibile di {2}."

// util
#define STRING_UTIL_CONFIRM_YES      "si"
#define STRING_UTIL_CONFIRM_YES_U    "Si"
#define STRING_UTIL_CONFIRM_NO       "no"
#define STRING_UTIL_CONFIRM_ALL      "tutti"
#define STRING_UTIL_CONFIRM_ALL_U    "Tutti"
#define STRING_UTIL_CONFIRM_QUIT     "esci"

// Legacy
#define STRING_LEGACY_PRIORITY       "Legacy attribute found.  Please change '{1}' to '{2}'."

#endif
