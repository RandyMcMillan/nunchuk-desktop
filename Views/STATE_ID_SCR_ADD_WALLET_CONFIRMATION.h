
#ifndef STATE_ID_SCR_ADD_WALLET_CONFIRMATION_H
#define STATE_ID_SCR_ADD_WALLET_CONFIRMATION_H

#include <QObject>
#include <QVariant>
#include "ViewsDefines.h"
#include "ViewsEnums.h"

void SCR_ADD_WALLET_CONFIRMATION_Entry(QVariant msg);
void SCR_ADD_WALLET_CONFIRMATION_Exit(QVariant msg);
void EVT_ADD_WALLET_CONFIRM_CREATE_HANDLER(QVariant msg);
void EVT_ADD_WALLET_TOP_UP_XPUBS_REQUEST_HANDLER(QVariant msg);
void EVT_ADD_WALLET_DOWNLOAD_DESCRIPTOR_HANDLER(QVariant msg);
void EVT_ADD_WALLET_GENERATE_SIGNER_HANDLER(QVariant msg);
void EVT_ADD_WALLET_GET_WALLET_DESCRIPTOR_HANDLER(QVariant msg);
void EVT_ADD_WALLET_COPY_WALLET_DESCRIPTOR_HANDLER(QVariant msg);
void EVT_ADD_WALLET_CONFIRMATION_BACK_REQUEST_HANDLER(QVariant msg);
void EVT_ADD_WALLET_SUCCESSFULLY_HANDLER(QVariant msg);

#endif // STATE_ID_SCR_ADD_WALLET_CONFIRMATION_H