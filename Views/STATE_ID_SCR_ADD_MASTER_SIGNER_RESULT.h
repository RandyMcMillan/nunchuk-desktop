
#ifndef STATE_ID_SCR_ADD_MASTER_SIGNER_RESULT_H
#define STATE_ID_SCR_ADD_MASTER_SIGNER_RESULT_H

#include <QObject>
#include <QVariant>
#include "ViewsDefines.h"
#include "ViewsEnums.h"

void SCR_ADD_MASTER_SIGNER_RESULT_Entry(QVariant msg);
void SCR_ADD_MASTER_SIGNER_RESULT_Exit(QVariant msg);
void EVT_ADD_MASTER_SIGNER_RESULT_RUN_HEALTHCHECK_HANDLER(QVariant msg);
void EVT_ADD_MASTER_SIGNER_RESULT_PROMT_PIN_HANDLER(QVariant msg);
void EVT_ADD_MASTER_SIGNER_RESULT_SEND_PIN_HANDLER(QVariant msg);
void EVT_ADD_MASTER_SIGNER_FINISHED_HANDLER(QVariant msg);
void EVT_ADD_MASTER_SIGNER_RESULT_CONFIRM_ADD_TO_WALLET_CONFIGURATION_HANDLER(QVariant msg);

#endif // STATE_ID_SCR_ADD_MASTER_SIGNER_RESULT_H